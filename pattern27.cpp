#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n (ODD) : ";
    cin >> n;
    int l = 1, r = n;
    int i = 1;
    while (i <= n)
    {
        int k = (i < n/2)?i:n - i; // just revert k back to i to get the earlier output which was half correct
        int j = 1;
        while(j <= n)
        {
            if (j >= l and j <= r)
            {
                cout << "* ";

            }
            else if((i % 2 == 0 and j % 2 == 0 ) 
            or (i % 2 != 0 and j % 2 != 0))
            {
                if (j >= k and j <= n + 1 - k)
                {
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
            else
            {
                cout << "  ";
            }

            j ++;
        }
            l += 3;
            r -= 3;
        cout << "\n";
        i ++;
    }
    return 0;
}