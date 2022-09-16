#include<iostream>
using namespace std;
int binIndex(int arr[], int size, int key)
{
    int l = 0, r = size - 1;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if (key == arr[mid])
            return mid;
        else if(key > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    // Answer not found if control is reached here
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 12, 17, 31, 46, 76};

    cout << binIndex(arr, 11, 76) << "\n";

return 0;
}