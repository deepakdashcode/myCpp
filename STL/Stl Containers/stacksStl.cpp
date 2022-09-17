#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Deepak");
    s.push("Kumar");
    s.push("Dash");

    cout << "Top Element is : " << s.top() << endl;

    cout << s.size() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;

    cout << "Is Empty : "<< s.empty() << endl;

    

return 0;
}