#include<iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 5, b = 10;
    int ans = 0;

    ans = getMax(a, b);

    cout << ans << endl;

    a += 10;
    b += 3;

    ans = getMax(a, b);
    cout << ans << endl;
return 0;
}