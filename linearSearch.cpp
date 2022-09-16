#include<iostream>
using namespace std;
bool search(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
            return true;        
    }
    return false;
}

int main()
{
    int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;
    cout << "Enter the key to search : ";
    cin >> key;

    bool isPresent = search(arr, 10, key);

    if(isPresent)
        cout << "Key is present\n";
    else
        cout << "Key is not present\n";



return 0;
}