#include<iostream>
using namespace std;

void update(int **ptr)
{
    // Any changes ?
    //ptr = ptr + 1;

    // // Any changes ?
    // *ptr = *ptr + 1;

    // // Any changes ?

    **ptr = **ptr + 1;

}

int main()
{

    int num = 5;

    int *ptr1 = &num;

    int **ptr2 = &ptr1;

    
    cout << "\n\n";
    cout << num << endl;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;

    update(ptr2);

    cout << "\n\n";
    cout << num << endl;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;

    

    return 0;
}