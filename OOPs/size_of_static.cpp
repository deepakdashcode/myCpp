#include<iostream>
using namespace std;

class hero
{
    public:
    // char *name;
    char level;
    static int timeToComplete;
    static int time;


};

// int hero::timeToComplete = 5;

int main()
{
    //cout << hero::timeToComplete << endl;

    hero a;
    hero b;

    hero arr[2] = {a, b};

    cout << sizeof(a) << endl;
    cout << sizeof(arr) << endl;

return 0;
}