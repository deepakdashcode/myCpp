#include<iostream>
using namespace std;

int* fun()
{
    int x = 10;
    return &x;
}
int main()
{
    int *ptr = fun();
    cout << *ptr << endl;
    
return 0;
}