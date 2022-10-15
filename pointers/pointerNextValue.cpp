#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;

    cout << ptr << endl;
    ptr ++;

    cout << ptr << endl;
    double a = 10.5;
    double *A = &a;

    cout << "A : " << A << endl;
    A ++;
    
    cout << "A : " << A << endl;

return 0;
}