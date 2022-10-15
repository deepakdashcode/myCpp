#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3};
    int *ptr = arr;

    cout << &arr << endl;
    cout << &ptr << endl;


return 0;
}