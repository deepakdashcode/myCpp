#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int *q = p;

    (*q) ++;

    cout << i << endl;
return 0;
}