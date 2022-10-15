#include<iostream>
#define AREA(l, b) (l * b)
using namespace std;
int main()
{
    int l1 = 10, l2 = 5, area = 0;
    area = AREA(l1, l2);
    cout << area << endl;

return 0;
}