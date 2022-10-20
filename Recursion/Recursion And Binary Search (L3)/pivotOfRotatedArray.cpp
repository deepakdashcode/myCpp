#include<iostream>
using namespace std;

int pivot(int *arr, int left, int right)
{
    if(left > right)
        return -1;
    if(left == right)
        return left;
    
    // Pivot is assumed to be the lower one
    int mid = left + (right - left) / 2;
    if(arr[mid - 1] > arr[mid])
        return mid;
    
    if(arr[0] > arr[mid])
    {
        return pivot(arr, left, mid - 1);
    }
    else
    {
        return pivot(arr, mid + 1, right);
    }
}

int main()
{
    int arr[] = {5, 7, 9, 1, 2, 3};
    int a[] = {7, 9, 12, 14, 18, 21};
    cout << arr[pivot(arr, 0, 5)] << endl;
    
return 0;
}