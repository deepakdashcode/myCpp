#include<iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int prod = 1;
    for(int i = 1; i <= b;i ++)
    {
        prod *= a;
    }
    return prod;
}

void printCounting(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of nums from 1 to n is : " << sum << endl;
    return;
    cout << "Hii";
}
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }

    int first = 0, second = 1;
    for(int i = 1;i <= n - 2; i++)
    {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}
int main()
{
    // int i = 1, n;
    // cout << "Enter n : ";
    // cin >> n;
    // while(i <= n)
    // { 
    // int prod = power();
    // cout << prod<< endl;
    // i ++;
    // }

    //printCounting(4);

    cout << fib(8) << endl;
return 0;
}