#include<iostream>
using namespace std;
int main()
{
    for (int i = 1, j = 5; i <= j && j >= 0; i ++, j --)
    {
        cout << i << " " << j << "\n";
    }
return 0;
}