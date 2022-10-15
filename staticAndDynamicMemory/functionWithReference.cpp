#include<iostream>
using namespace std;


int& func(int a)
{
    int num = a;
    int &ans = ++num;

    return ans;
}
int main()
{
    int n = 5;

    func(n);
    cout << func(n) << endl;
    
return 0;
}