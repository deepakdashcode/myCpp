#include<iostream>
using namespace std;

void print(int n)
{
    for(int i = n; i >= 1; i--)
    {
        for(int sp = 1; sp <= n - i; sp++)
            cout << "  ";
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

}

int main()
{
    int n = 10;
    print(n);


int i = 1;

for(;;)
{
    i ++;
    cout << "Hello World\n";

    if(i >= 10)
    {
        break;
    }
}
return 0;
}