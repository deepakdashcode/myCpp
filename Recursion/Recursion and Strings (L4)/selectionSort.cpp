#include<iostream>
#include "printArr.cpp"

using namespace std;

void sort(int *arr, int start, int size)
{
    if(start == size || size == 0|| size == 1)
    {
        return;
    }
    int minIndex = start;
    for(int i = start + 1; i < size; i++)
    {
        if(arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[start]);
    sort(arr, start + 1, size);
}

int main()
{
    int arr[] = {1, 3, 7, 2, 4, 3, 9, 0};
    sort(arr, 0, 8);

    print(arr, 8);


    
return 0;
}