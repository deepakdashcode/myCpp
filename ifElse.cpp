#include<iostream>
using namespace std;
int main()
{
char ch;
cout << "Enter a character\n";
cin >> ch;

int asVal = ch;

if (asVal >= 97 && asVal <= 122)
{
    cout << "Lowercase\n";
}
else if (asVal >= 65 && asVal <= 90)
{
    cout << "Uppercase\n";
}
else
{
    cout << "Number\n";
}

return 0;
}