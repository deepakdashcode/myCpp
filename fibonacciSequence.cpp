#include<iostream>
using namespace std;
int main()
{
    int n;
    n = 7;
    int first = 0, second = 1;
    cout << first << "\n";
    cout << second << endl;
    for(int i = 1;i <= n - 2; i++)
    {
        int next = first + second;
        first = second;
        second = next;
        cout << next << endl;
    }
    
return 0;

}