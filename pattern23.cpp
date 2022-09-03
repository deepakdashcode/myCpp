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
            cout << " ";
            sp += 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i ;
            j++;
        }
        cout << "\n";
        i ++;
    }
return 0;
}