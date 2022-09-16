#include<iostream>
using namespace std;

// void printArr(int arr[], int len)
// {
//     int l = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i < len; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     cout << "l is " << l << endl;

// }

void test()
{
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[2] << endl;
}

int maximum(int arr[], int size)
{
    int high = arr[0];
    
    for(int i = 1; i < size; i++)
    {
        high = max(high, arr[i]);
        
    }
    return high;
}

int main()
{
    // int arr[5] = {[0 ... 2] = 1, [3 ... 4] = 4};
    // printArr(arr, 5);

    // int len = sizeof(arr)/sizeof(arr[0]);
    // cout << "len is " << len << endl;

    // cout << arr[8] << endl;

    //test();

    int nums[] = {1, 3, 3, 4, 2, 2, 4, 2 ,5,  5,2, 68, 342, 23,2 , 24,234,43};
    cout << maximum(nums, 18) << endl;

return 0;
}