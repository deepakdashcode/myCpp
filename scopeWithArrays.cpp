#include<iostream>
using namespace std;

void update(int arr[], int size)
{

    cout << "inside of update" << endl;
    arr[0] = 5;
    for(int i = 0; i< 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main()
{

    int arr[] = {1, 2, 3};

    update(arr, 3);

    cout << "Inside main" << endl;
    // Printing
    for(int i = 0; i< 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}