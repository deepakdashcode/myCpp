#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int spaces = n - i;
        int sp = 1;
        while (sp <= spaces)
        {
            cout << "  ";
            sp ++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j ++;
        }

        int k = i - 1;
        while (k >= 1)
        {
            cout << k << " "; 
            k --;
        }
        cout << "\n";
        i ++;
    }
return 0;
}