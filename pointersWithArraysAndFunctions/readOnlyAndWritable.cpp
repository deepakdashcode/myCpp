#include<iostream>
using namespace std;
int main()
{
    // char ch[] = "abcde";
    // *(ch + 1) = 'f';
    // cout << ch << endl;

    char *ch = "abcde";

    auto *ptr = ch;
    cout << ptr << endl;

    ch = "def";
    cout << &ch[0] << endl;


    cout << "Hii";
return 0;
}