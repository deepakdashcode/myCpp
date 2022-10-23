#include<iostream>
using namespace std;


int partition(int *arr, int start, int end)
{
    int pivot = arr[start];

    int smallCount = 0;
    for(int i = start + 1; i <= end; i ++)
    {
        if(arr[i] <= pivot)
            smallCount ++;
    }
    // Place pivot at correct position
    int pivotIndex = start + smallCount;

    swap(arr[start], arr[pivotIndex]);

    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i ++;
        }
        while(arr[j] > pivot)
        {
            j --;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i ++], arr[j --]);

        }
        
    }
    return pivotIndex;

}
void quickSort(int *arr, int start, int end)
{
    if(start >= end)
        return;
    
    // Partition
    int p = partition(arr, start, end);

    // Left Part
    quickSort(arr, start, p - 1);
    // Right Part
    quickSort(arr, p + 1, end);

}
int main()
{
    int arr[] = {1, 7, 8, 9, 3, 8, 2, 1, 0, 4, 1};
    int n = 11;
    quickSort(arr, 0, n - 1);


    for(int i = 0; i < n;i ++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
return 0;
}