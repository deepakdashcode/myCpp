#include<iostream>
using namespace std;

class hero
{
    public:
    char *name;
    char level;
    static int timeToComplete;


};

int hero::timeToComplete = 5;

int main()
{
    cout << hero::timeToComplete << endl;

    hero a;
    hero b;
    cout << a.timeToComplete << endl;

    a.timeToComplete = 10;

    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;
return 0;
}