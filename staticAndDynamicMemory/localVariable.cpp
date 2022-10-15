#include<iostream>
using namespace std;

int* fun(int n)
{
    int num = n;
    int *ptr = &num;
    return ptr;
}
int main()
{
    int *ptr = fun(10);
    cout << *ptr << endl;
    
return 0;
}