#include <iostream>
using namespace std;

bool isPalin(string s, int start, int end)
{
    if(start >= end)
        return true;
    if(s[start] != s[end])
        return false;
    
    return isPalin(s, start + 1, end - 1);
}

int main()
{
    string lang = "malayalam";
    string s = "maam";
    string s1 = "mama";
    cout << isPalin(lang, 0, lang.length() - 1) << endl;
    cout << isPalin(s, 0, s.length() - 1) << endl;
    cout << isPalin(s1, 0, s1.length() - 1) << endl;

return 0;
}