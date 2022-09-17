#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Deepak");
    q.push("Kumar");
    q.push("Dash");

    cout <<"Front element : "<< q.front() << endl;
    cout << "Size : " << q.size() << endl;
    q.pop();

    cout <<"Front element : "<< q.front() << endl;
    cout << "Size : " << q.size() << endl;

    

return 0;
}