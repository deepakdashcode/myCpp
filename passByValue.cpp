#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    cout << "Value of a and b inside swap " << a << " " << b << endl;
}

int main()
{
    int a = 5;
    int b = 7;

    swap(a, b);
    cout << "Value of a and b outside swap " << a << " " << b << endl;

return 0;
}