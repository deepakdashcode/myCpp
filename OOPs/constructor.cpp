#include<iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

    hero(){
        cout << "New Object Created. Health : " << health << " Level : " << level << endl;
    }

};
int main()
{
    cout << "Hii" << endl;
    hero h;
    cout << "Hello" << endl;
    hero *a = new hero;
    hero *b = new hero();
    a->health =5;
    b->health = 10;
    cout << a << endl;
    cout << b << endl;
return 0;
}