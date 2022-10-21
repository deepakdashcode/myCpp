#include<iostream>
using namespace std;
int pow(int a, int x)
{
    if(x == 1)
        return a;
    if(x == 0)
        return 1;
    if(x & 1) // if x is odd
        return pow(a * a, x / 2) * a;
    else // if x is even
        return pow(a * a, x / 2);
}
int main()
{
    cout << pow(2,  5) << endl;
    cout << pow(3, 4) << endl;
    cout << pow(2, 13) << endl;

return 0;
}