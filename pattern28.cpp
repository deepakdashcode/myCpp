#include<iostream>
using namespace std;
void printPattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int spaces = n - i;

        for(int sp = 1; sp <= spaces; sp++)
        {
            cout << "  ";
        }
        cout << "* ";
        if(i == 1)
        {
            cout << "\n";
            continue;
        }

        int newSpaces = (2 * (i - 1) )- 1;
        for(int sp = 1; sp <= newSpaces; sp++)
        {
            cout << "  ";
        }
        
        cout << "* \n";
    }
}
int abs(int x)
{
    return (x >= 0)?x:(-x);
}
void printPattern1(int n)
{
    for(int i = 1; i <= 2*n - 1; i++)
    {
        for(int j = 1; j <= 2*n - 1; j++)
        {
            if(abs(i + j) == n + 1 || abs(j - i) == n - 1 || (i + j) == (n * 3 - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

int main()
{

printPattern1(20);
return 0;
}