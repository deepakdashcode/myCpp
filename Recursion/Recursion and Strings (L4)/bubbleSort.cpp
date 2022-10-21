#include<iostream>
#include "printArr.cpp"

using namespace std;

void sort(int *arr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}


void sortRec(int *arr, int size, int swaps = 1)
{
    if(size == 0 || size == 1 || swaps == 0)
    {
        return;
    }
    swaps = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swaps ++;
        }
    }
    sortRec(arr, size - 1, swaps);
}

int main()
{
    int arr[] = {1, 7, 2, 4, 5, 0 ,9};
    int arr1[] = {19 ,8, 7,5, 9, 4, 2, 7, 2, 4, 5, 0 ,9};
    sortRec(arr, 6);
    print(arr, 7);
    sortRec(arr1, 13);
    print(arr1, 13);


    int a[100000];
    for(int i = 1; i <= 100000; i++)
    {
        a[i - 1] = i;
    }


    sortRec(a, 100000);

    for(int i = 0; i < 100000; i ++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
return 0;
}