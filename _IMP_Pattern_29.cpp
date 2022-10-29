#include<iostream>
using namespace std;
int main()
{
    int n = 9;

    for(int i = n; i >= 1; i --)
    {
        for(int j = n; j >= i; j --)
            cout << j << " ";
        
        for(int j = 1; j < i; j ++)
            cout << i << " ";
        
        for(int j = 1; j < i; j ++)
            cout << i << " ";
        
        for(int j = i + 1; j <= n; j ++)
            cout << j << " ";
        
        cout << "\n";
    }
    for(int i = 2; i <= n; i ++)
    {
        for(int j = n; j >= i; j --)
            cout << j << " ";
        
        for(int j = 1; j < i; j ++)
            cout << i << " ";
        
        for(int j = 1; j < i; j ++)
            cout << i << " ";
        
        for(int j = i + 1; j <= n; j ++)
            cout << j << " ";
        
        cout << "\n";
    }
return 0;
}