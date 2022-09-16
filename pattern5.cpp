#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int i = 1, t = 1;
while (i <= n)
{
    int j = 1;
    while (j <= n)
    {
        cout << t << "\t";
        j++; // 
        t++;
    }
    cout << "\n";
    i ++;
}
return 0;
}