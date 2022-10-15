#include<iostream>
using namespace std;

int getSum(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;

    // Variable size array
    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element : " << (i + 1) << " : ";
        cin >> i[arr];
    }

    cout << "Sum is : " << getSum(arr, n) << endl;

return 0;
}