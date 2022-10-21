#include<iostream>
using namespace std;

void print(int *arr,int start, int end)
{
    for(int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void mer(int *arr1, int len1, int *arr2, int len2, int *arr)
{
    int i = 0, j = 0;
    int k = 0;
    while(i < len1 && j < len2)
    {
        if(arr1[i] < arr2[j])
        {
            arr[k ++] = arr1[i ++];
        }
        else
        {
            arr[k ++] = arr2[j ++];
        }
    }

    while(i < len1)
    {
        arr[k ++] = arr1[i ++];
    }
    while(j < len2)
    {
        arr[k ++] = arr2[j ++];
    }

    delete []arr1;
    delete []arr2;
}

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    cout << "start " << start << " end " << end << endl;

    int k = start;
    for(int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k ++];
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k ++];
    }
    print(arr1, 0, len1);
    print(arr2, 0, len2);
    // merge
    //mer(arr1, len1, arr2, len2, arr);

    int i = 0, j = 0;
    k = start;
    while(i < len1 && j < len2)
    {
        if(arr1[i] < arr2[j])
        {
            arr[k ++] = arr1[i ++];
        }
        else
        {
            arr[k ++] = arr2[j ++];
        }
    }

    while(i < len1)
    {
        arr[k ++] = arr1[i ++];
    }
    while(j < len2)
    {
        arr[k ++] = arr2[j ++];
    }

    delete []arr1;
    delete []arr2;
}
void mergeSort(int *arr, int start, int end)
{
    if(start >= end)
        return;
    
    int mid = (start + end) / 2;

    // Left Part Sort
    mergeSort(arr, start, mid);
    //print(arr, start, mid);

    // Right Part Sort
    mergeSort(arr, mid + 1, end);
    //print(arr, mid + 1, end);
    // Merge Both

    merge(arr, start, end);
    //print(arr, start, end);


}
int main()
{
    int arr[] = {1, 3, 7, 5, 4, 9, 8};
    mergeSort(arr, 0, 6);



    print(arr, 0, 6);

    // int arr1[] = {1, 3, 7, 9, 12};
    // int arr2[] = {6, 8, 9, 10,10, 15, 19};
    // int arr[12];

    // mer(arr1, 5, arr2, 7, arr);

    // for(int i = 0; i < 12; i ++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
return 0;
}