#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n + 1)
    {
        int stars = n - i + 1;
        int hash = i - 1;

        if (i % 2 != 0)
        {
            int st = 1;
            while (st <= stars)
            {
                cout << "* ";
                st ++ ;
            }
            int hs  = 1;
            while (hs <= hash)
            {
                cout << "# ";
                hs ++;
            }
        }
        else
        {
            int hs  = 1;
            while (hs <= hash)
            {
                cout << "# ";
                hs ++;
            }
            int st = 1;
            while (st <= stars)
            {
                cout << "* ";
                st ++ ;
            }

        }

        cout << "\n";
        i ++;
    }
return 0;
}