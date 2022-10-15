#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char> &s, int l, int r)
{
    while(l < r)
    {
        swap(s[l ++], s[r --]);
    }
}
void reverseWords(vector<char> &sentence)
{
    int end = sentence.size();
    reverse(sentence, 0, end - 1);

    int l = 0, r = 0;
    while(r <= end)
    {
        if(sentence[r] == ' ' || r == end)
            {
            reverse(sentence, l, r - 1);
            l = r + 1;
            r ++;
            }
        else{
            r ++;
        }
    }
}
int main()
{
    vector<char> ch = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    reverseWords(ch);

    for(int i = 0; i < ch.size(); i++)
        cout << ch[i];
    
    cout << endl;

    cout <<"Size : "<< ch.size() << endl;

    cout << endl;
    
    return 0;
}