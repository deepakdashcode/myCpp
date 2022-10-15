#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    void *ptr = &i;

    cout << "Value is " << *(static_cast<int*>(ptr)) << endl;
    cout << "Value is " << *((int*)(ptr)) << endl;


    cout << (-10 % 4)  << endl; // -2
    cout << (10 % -4)  << endl; //  2
    cout << (10 % 4)   << endl; //  2
    cout << (-10 % -4) << endl; // -2 


return 0;
}