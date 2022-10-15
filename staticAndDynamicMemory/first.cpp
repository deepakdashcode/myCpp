#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void update1(int n)
{
    n ++;
}
void update2(int &n)
{
    n ++;
}
int main()
{
    // int i = 5;
    // int &j = i;

    // // int k = 5, l = 10;
    // // swap(k, l);
    // // cout << k << endl << l << endl;

    // j ++;

    // i ++;

    // cout << i << " " << j << endl;


    int n = 5;

    cout << "Before " << n << endl;
    update2(n);

    cout << "After " << n << endl;

    

return 0;
}