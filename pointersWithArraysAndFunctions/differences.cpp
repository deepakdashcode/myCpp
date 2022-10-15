#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 3, 7};
    int *ptr = &arr[0];
    cout << ptr << endl;


    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;

return 0;
}