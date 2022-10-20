#include<iostream>
using namespace std;

bool check(int *arr, int size)
{
    if(size == 1 || size == 0)
        return true;
    
    if(arr[0] <= arr[1])
        return check(arr + 1, size - 1);
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 2, 6 , 9};
    int arr1[] = {1, 4, 2, 5}; 
    cout << check(arr, 5) << endl;
    cout << check(arr1, 4) << endl;
    
return 0;
}