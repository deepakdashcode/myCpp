#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int key)
{
    if(size == 0)
        return false;
    if(size == 1)
    {
        if(arr[0] == key)
            return true;
        else
            return false;
    }
    if(arr[0] == key)
        return true;
    else
        return isPresent(arr + 1, size - 1, key);
}

int main()
{
    // Testing
    
    // int arr[] = {1, 4, 7, 5, 6, 17};
    // for(int i = 0; i <= 20; i++)
    // {
    //     cout << i << "is Present : " << isPresent(arr, 6, i) << endl;
    // }

return 0;
}