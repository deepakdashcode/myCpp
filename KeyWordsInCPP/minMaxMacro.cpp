#include<iostream>
using namespace std;

#define MAX(a, b) ((a > b)?a : b)
int main()
{
    int num1 = 5, num2 = 6;
    int max = MAX(num1, num2);
    cout << max << endl;
    
return 0;
}