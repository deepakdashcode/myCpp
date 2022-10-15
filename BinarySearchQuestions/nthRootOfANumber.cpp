#include<iostream>

using namespace std;
double pow(double num, int root)
{
    double ans = 1;
    for(int i = 1; i <= root; i++)
        ans = ans * num;
    
    return ans;
}

double nthRoot(int num, int root)
{
    double l = 1, r = num;

    double ans = 0;
    while((r - l) > 1e-6)
    {
        double mid = (l + r) / 2.0;
        if(pow(mid, root) < num)
        {
            l = mid;
            ans = mid;
        }
        else
        {
            r = mid;
            ans = mid;
        }

    }
    return ans;
}

int main()
{
    cout << nthRoot(27, 2) << endl;;
    
    return 0;
}