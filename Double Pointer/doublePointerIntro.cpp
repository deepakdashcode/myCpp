#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i;

    int **p = &ptr;

    cout << **p << endl;
return 0;
}