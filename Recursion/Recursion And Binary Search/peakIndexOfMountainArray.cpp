#include<iostream>
using namespace std;

pair<int, int> peakIndex(int *arr, int left, int right)
{
    int mid = left + (right - left) / 2;
    cout << "mid : " << mid << endl; 
    // Checking if mid is the peak Index
    
    if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
    {
        pair<int, int> ans;
        ans.first = mid;
        ans.second = arr[mid];
        return ans;
    }

    if(arr[mid + 1] < arr[mid])
    {
        return peakIndex(arr, left, mid - 1);
    }
    else
    {
        return peakIndex(arr, mid + 1, right);
    }
}

int main()
{
    int arr[] = {1, 4, 5, 7 , 8, 4};
    pair<int, int> ans = peakIndex(arr, 0, 5);

    cout << "Index = " << ans.first << endl;
    cout << "Element = " << ans.second << endl;
return 0;
}