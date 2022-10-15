#include<iostream>

using namespace std;
char toLowerCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return (char)(ch + 32);
    return ch;
}
bool isValid(char ch)
{
    if(ch >= 'A' and ch <='Z')
        return true;
    if(ch >= 'a' and ch <= 'z')
        return true;
    if(ch >= '0' and ch <='9')
        return true;
    
    return false;
}
bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    while(l <= r)
    {
        while(!isValid(s[l]))
           { l ++;
           }
        cout <<"l is : " <<l << endl;
        while(!isValid(s[r]))
           { r --;
           }
        cout << "r is : " << r << endl;
        
        if((toLowerCase(s[l]) != toLowerCase(s[r])) and l <= r)
            return false;
        l ++;
        r --;
    }

return true;
}
int main()
{

    char ch = 'Y';
    cout << toLowerCase(ch) << endl;

    string a = "ab  ba";
    cout << isValid('a') << endl;
    cout << isPalindrome(a) << endl;
    return 0;
}