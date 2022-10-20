#include <iostream>
using namespace std;

void printStr(string s, int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        cout << s[i] ;
    }
    cout << "\n";
}
void reverse(string &s, int start, int end)
{
    cout << "Current String " << s << endl;
    if(start >= end)
    {
        return;
    }

    swap(s[start], s[end]);
    reverse(s, start + 1, end - 1);
}

string rev(string s, int start, int end)
{
    if(start == end)
    {
        return string(1, s[start]);
    }
    

    return rev(s, start + 1, end)  + s[start];

}


int main()
{
    string a = "abcd";
    string b = "abcde";
    reverse(a, 0, a.length() - 1);
    reverse(b, 0, b.length() - 1);
    cout << a << endl;
    cout << b << endl;
    
    // string test = "abcd";
    // string rev_test = rev(test, 0, test.length() - 1);
    // cout << rev_test << endl;
return 0;
}