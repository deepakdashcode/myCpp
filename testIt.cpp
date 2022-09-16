#include<iostream>
using namespace std;
int main()
{
    int a = 3, b = 5;
    cout << (a & 7) << endl;
    cout << (a | 7) << endl;
    cout << (~5) << endl;
    cout << (5 ^ 7) << endl;
    cout << (5 % 3) << endl;
    cout << (-5 % 3) << endl;
    cout << (5 % -3) << endl;
    cout << (-5 % -3) << endl;
    cout << (5 << 3) << endl;
    cout << (1207959552 << 2) << endl;
    // expected 536870912
return 0;
}