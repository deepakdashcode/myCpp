#include<iostream>
using namespace std;

bool search(int *arr, int size, int key)
{
    int mid = size / 2;
    cout << "\nmid" << mid<< "\n";
    if(size == 0)
        return false;
    if(arr[mid] == key)
        return true;
    
    if(arr[mid] > key)
    {
        return search(arr, mid, key);
    }
    else
        return search(arr + mid + 1, size - mid - 1, key);
}

int main()
{
    int arr[] = {1, 5 ,7, 9, 12};
    for(int i = 1; i < 15; i++)
    {
        cout << "num : " << i << " : " << search(arr, 5 ,i)<< endl; 
    }
    //cout << search(arr, 5, 8) << endl;


return 0;
}