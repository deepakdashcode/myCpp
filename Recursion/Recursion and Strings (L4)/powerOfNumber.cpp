#include <iostream>
using namespace std;

long long int pow(long long int a, long long int x)
{
    cout << "Finding a , x : " << a << " , " << x << endl;
    if(x == 0)
        return 1;
    long long int ans = pow(a, x / 2);

    if(x & 1)
    {
        return a * ans * ans;
    }
    return ans * ans;
}

int main()
{
    cout << pow(2, 60) << endl;
return 0;
}