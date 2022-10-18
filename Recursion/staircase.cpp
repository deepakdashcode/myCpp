#include<iostream>
using namespace std;

long long int climbStairs(int n)
{
    if(n == 1)
        return 1;
    long long int first = 1, second = 2;
    for(int i = 1; i < n - 1; i ++)
    {
        long long int third = first + second;
        first = second;
        second = third;
    }
        
    return second;
}
int main()
{
    cout << climbStairs(51) << endl;
return 0;
}