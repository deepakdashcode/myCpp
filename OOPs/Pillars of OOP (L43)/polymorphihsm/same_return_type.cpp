#include <iostream>
#include <math.h>
using namespace std;

int area(int side)
{
    return side * side;
}

int area(double radius)
{
    return (22 / 7.0) * radius * radius;
}

double area(float side)
{
    return 1.0;
}
int main()
{
    cout << area(5) << endl;
    cout << area(5.0) << endl;
    cout << area((float)(3.0)) << endl;

    return 0;
}