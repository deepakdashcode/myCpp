#include<iostream>
using namespace std;

string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print(int n)
{
    if(n <= 9)
    {
        cout << arr[n] << " ";
        return;
    }
    int lastDigit = n % 10;
    print(n / 10);
    cout << arr[lastDigit] << " ";

}


int main()
{
    int num = 45123053;
    print(num);
return 0;
}