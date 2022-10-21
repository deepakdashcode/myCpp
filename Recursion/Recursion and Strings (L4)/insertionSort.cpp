#include<iostream>
#include "printArr.cpp"

using namespace std;

void sort(int *arr, int size, int start = 1)
{
    if(start > size)
        return;
    int key = arr[start];
    int j = start - 1;

    while(j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j --;
    }
    arr[j + 1] = key;

    sort(arr, size, start + 1);
}

int main()
{

    int arr[] = {1, 3, 7, 2, 4, 3, 9, 0};
    sort(arr, 8);
    print(arr, 8);


    int a[10000];
    for(int i = 1; i <= 10000; i++)
    {
        a[i - 1] = i;
    }

    sort(a, 10000);  
    print(a, 10000);  
return 0;
}