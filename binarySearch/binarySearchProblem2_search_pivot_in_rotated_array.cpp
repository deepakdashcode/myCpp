#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size)
{
    int l = 0, r = size - 1;
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;

        if((arr[mid] < arr[mid + 1]) && (arr[mid] < arr[mid - 1]))
        {
            return mid;
        }
        else if(arr[0] > arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return mid;
}
int main()
{
    int arr[] = {9, 1, 2, 3, 7};
    cout << pivotIndex(arr, 7) << "\n";

return 0;
}