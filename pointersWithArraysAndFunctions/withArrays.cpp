#include<iostream>
using namespace std;
int main()
{
    
    int arr[10] = {1, 3, 7};
    int *ptr = &arr[0];

    int *p = arr;

    cout << p << endl;

    
    int* ptr1 = &arr[1];

    cout << 2[arr] << endl;

    
    cout << *(arr + 1) << endl;
    cout << ptr << endl;
    cout << arr << endl;
    cout << ptr[1] << endl;
    cout << ptr1[1] << endl;


    unsigned long long int val = 0x1efd9ffa50;

    cout << val << endl;

    
return 0;
}