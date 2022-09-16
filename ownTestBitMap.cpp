#include<iostream>
using namespace std;
void updateArr(int num, int arr[])
{
    int k = 0;
    while(num != 0)
    {
        int lastBit = num & 1;
        if(lastBit == 1)
        {
            arr[31 - k - 1] ++ ;
        }
        k ++;
        num >>= 1;
    }
}

void printArr(int arr[])
{
    for(int i = 0;i < 31; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[31] = {0};
    int num = 10;
    updateArr(10, arr);
    updateArr(5, arr);
    updateArr(7, arr);
    printArr(arr);
return 0;
}