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
        int stars = i * 2 - 1;

        int st = 1;
        while (st <= stars)
        {
            cout << "* ";
            st ++;
        }
        cout << "\n";
        i ++;
    }

    i = n - 1;
    while (i >= 1)
    {
        int spaces = n - i;

        int sp = 1;
        while (sp <= spaces)
        {
            cout << "  ";
            sp ++;
        }
        int stars = i * 2 - 1;

        int st = 1;
        while (st <= stars)
        {
            cout << "* ";
            st ++;
        }
        cout << "\n";
        i --;
    
    }
return 0;
}