#include<iostream>
using namespace std;
int main()
{
int noOfDivisors = 0;

int n ;
cin >> n;
int i = 2;
bool isPrime = true;
while (i < n)
{
    if (n % i == 0)
    {
        isPrime = false;
        break;
    }
    i += 1;
}
if (n == 1)
isPrime = false;

if (isPrime)
{
    cout << "Yes Prime\n";

}
else
cout << "Not Prime\n";


return 0;
}