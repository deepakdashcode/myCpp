#include<iostream>
using namespace std;
/*
 Note : Once you provide default argiment to a parameter. then you must provide
        Default arguments for all the parameters that appear to it's right

        Example (int arr[], int size = 1, int start) --> Invalid
        error : missing default argument on parameter 'start'

*/

void printArray(int arr[], int size, int start = 0)
{
    if(start > (size - 1))
        return;
    for(int i = start; i < size; i ++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {1, 3, 4, 6, 7, 9, 12};
    printArray(arr, 7);
    printArray(arr, 7, 2);

return 0;
}