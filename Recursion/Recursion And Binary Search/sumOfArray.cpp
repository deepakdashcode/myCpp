#include<iostream>
using namespace std;

int sum(int *arr, int size)
{
    if(size == 1)
        return arr[0];
    if(size == 0)
        return 0;
    
    return arr[0] + sum(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 7, 3 ,2 ,4};
    cout << "Sum is " << sum(arr, 5) << endl;
return 0;
}