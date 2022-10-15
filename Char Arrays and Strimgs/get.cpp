#include<iostream>

using namespace std;

char getMax(string s)
{
    int fre[26] = {0};
    int maxFrequency = -1;
    for(int i = 0; i < s.length(); i ++)
    {
        char ch = s[i];
        int index = ch - 'a';
        maxFrequency =  max(++fre[index], maxFrequency);

    }
    for(int i = 0; i < 26; i++)
    {
        if(fre[i] == maxFrequency)
        {
            return (char)(i + 'a');
        }
    }
    return '\0';

}
int main()
{
    string s = "bbaaccefgh";
    cout << getMax(s) << endl;   
    return 0;
}