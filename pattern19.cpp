#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i = n;
    
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*" << " ";
            j ++;
        
        }
        cout << "\n";
        i --;
    }
return 0;
}