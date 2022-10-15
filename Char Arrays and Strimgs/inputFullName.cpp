#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    char arr[5] = {'a', 'b', '\n', '\t', 'f'};
    cout << "Enter Your Name : ";
    getline(cin , s, '\t'); // can be used for mltiline strings
    


    cout << s << endl;
    return 0;
}