#include<iostream>
using namespace std;
int main()
{
    // Stack is cleared automatically but we need to manually release heap storage

    // Deleting a single int
    int *ptr = new int;
    delete ptr;

    // Deleting an array
    int *arr = new int[10];

    arr[0] = 0;

    cout << arr[0] << endl;
    cout << arr << endl;
    delete []arr;



    // The memory at ptr is cleared, but ptr still points to same address
    cout << arr[0] << endl;
    cout << arr << endl;

    

return 0;
}