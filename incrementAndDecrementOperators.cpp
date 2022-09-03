#include<iostream>
using namespace std;
int main()
{
/*
    int i = 4;
    int a = ++ i;
    cout << a << " " << i << "\n";
*/

/*
    int i = 3, a = 2;
    int sum = a + (++i);
    cout << sum << "\n";
    cout << i << "\n";
*/

/*
    int a = 2, i = 3;
    int sum = a + (++ i);
    cout << sum << "\n";
    cout << i << "\n";
*/

/*
    int i = 5;
    int a = -- i ;
    cout << i << " " << a << "\n";
    */

    int i = 10;
    cout << (i++) << "\n";
    // 10, i = 11
    cout << (++i) << "\n";
    // 12, i = 12
    cout << (--i) << "\n";
    // 11, i = 11
    cout << (i--) << "\n";
    // 11, i = 10
    cout << i << "\n";
    // 10
return 0;
}