#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;

    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    cout << "Enter op : "; cin >> op;

    switch(op)
    {
        case '+': cout << a + b << endl;
            break;
        case '-': cout << a - b << endl;
            break;
        case '/': cout << a / b << endl;
            break;
        case '*': cout << a * b << endl;
            break;
        case '%': cout << a % b << endl;
            break;
        
        default : cout << "Enter a valid Character\n";
    }
return 0;
}