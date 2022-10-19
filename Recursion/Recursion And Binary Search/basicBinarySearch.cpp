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

void print(int *arr, int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int ind(int *arr, int l, int r, int key)
{
    print(arr, l, r);
    if(l > r)
        return -1;
    
    int mid = l + (r - l) / 2;

    if(arr[mid] == key)
        return mid;
    if(arr[mid] > key)
        return ind(arr, l, mid - 1, key);
    else
        return ind(arr, mid + 1, r, key);
}

int main()
{
    int arr[] = {1, 5 ,7, 9, 12 ,18, 19, 22, 25, 26, 27, 28, 29, 31, 38, 39, 45, 54, 55, 58, 59, 61 ,63 ,68 ,71 ,82, 88, 91 ,99, 100};

    // for(int i = 1; i <= 12; i++)
    // {
    //     cout << " Index of " << i << " is : " << ind(arr, 0, 4, i) << endl;

    // }
    // //cout << search(arr, 5, 8) << endl;

    // Searching for 29

    cout << ind(arr, 0, 29, 29) << endl;

    // Searching for 57

    cout << "\n\n";
    cout << ind(arr, 0, 29, 57) << endl;

return 0;
}