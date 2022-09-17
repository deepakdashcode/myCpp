#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // Creates a max heap by default
    priority_queue<int> maximum;

    // Creates a min heap
    priority_queue<int, vector<int>, greater<int> > minimum;

    maximum.push(7);
    maximum.push(12);
    maximum.push(11);
    maximum.push(10);
    maximum.push(35);

    while(!maximum.empty())
    {
        cout << maximum.top() << "  ";
        maximum.pop();
    }

    cout << "\n";




    minimum.push(7);
    minimum.push(12);
    minimum.push(11);
    minimum.push(10);
    minimum.push(35);

    while(!minimum.empty())
    {
        cout << minimum.top() << "  ";
        minimum.pop();
    }

    cout << "\n";


return 0;
}