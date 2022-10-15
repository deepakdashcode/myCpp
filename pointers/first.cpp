#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;

    // address of Operator --> &

    cout << "Address of num : " << &num << endl;

    int *ptr = &num;
    (*ptr) ++;
    cout << num << endl;
    cout << ptr << endl;


    cout << "Size of Integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;


    double d = 4.5;
    double *pd = &d;

    cout << "Size of double is : " << sizeof(d) << endl;
    cout << "Size of double pointer is : " << sizeof(pd) << endl;


    int *ptrTest = 0;
    cout << *ptrTest << endl;
    
return 0;
}