#include<iostream>
#include "Hero.cpp"
using namespace std;

int main()
{
    Hero h1;

    cout << "Size is : " << sizeof(h1) << endl;
    
    h1.health = 5;
    h1.level = 1;

    cout << "Health is : " << h1.health << endl;
    cout << "Level is : " << h1.level << endl;
return 0;
}