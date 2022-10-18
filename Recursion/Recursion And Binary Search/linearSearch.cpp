#include<iostream>
using namespace std;

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool isPresent(int *arr, int size, int key)
{
    print(arr, size);
    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    else
        return isPresent(arr + 1, size - 1, key);
}

int main()
{
    // Testing

    int arr[] = {1, 4, 7, 5, 6, 17};
    cout << isPresent(arr, 6, 5) << endl;


return 0;
}