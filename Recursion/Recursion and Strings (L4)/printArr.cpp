#include<iostream>
using namespace std;

void print(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}