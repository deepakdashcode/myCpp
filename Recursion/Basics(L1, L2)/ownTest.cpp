#include<iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
    return 0;
    if (n == 2)
    return 1;

    return fib(n - 1) + fib(n - 2);
}

int pow(int num, int n)
{

    if(n == 0)
        return 1;
    if(n == 1)
        return num;

    return num * pow(num, n - 1);
}

int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    
    return n * factorial(n - 1);
}
int main()
{
    cout << fib(10) << endl;

    cout << pow(3, 4) << endl;

    cout << factorial(5) << endl;

return 0;
}