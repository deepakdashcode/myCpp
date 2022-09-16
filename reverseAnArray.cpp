#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int i = 0, j = size - 1;
    while(i < j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i ++;
        j --;
    }
}

int main()
{
    int arr[] = {1, 3 ,33 ,2};
    reverse(arr, 4);
    for(int i = 0; i < 4; i ++)
    {
        cout << arr[i] << endl;
    }
    
return 0;
}