#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key)
{
    int l = 0, r = size - 1;
    int ans  = -1;

    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        
        if(arr[mid] == key)
        {
            ans = mid;
            r = mid - 1;
        }
        else if(arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int l = 0, r = size - 1;
    int ans =  -1;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(arr[mid] == key)
        {
            ans = mid;
            l = mid + 1;

        }
        else if(arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;

} 
int main()
{
    int arr[] = {3, 3, 3 ,3 ,3 ,3, 7, 9, 11};
    cout << firstOccurence(arr, 9, 8)<< "\n";
return 0;
}