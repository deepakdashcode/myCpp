#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    void *ptr = &i;

    cout << "Value is " << *(static_cast<int*>(ptr)) << endl;
    cout << "Value is " << *((int*)(ptr)) << endl;




return 0;
}