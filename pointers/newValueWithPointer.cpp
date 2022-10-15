#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;

    (*ptr) ++;
    cout << num;
return 0;
}