#include<iostream>
#define ELE 1, 2, 3, 4, 5

#define E 1, \
          2, \
          4, \
          7

using namespace std;
int main()
{
    int arr[] = {ELE};
    int a[] = {E};

    for(int i = 0; i < 5; i ++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n";

    for(int j = 0; j < 4; j ++)
    {
        cout << a[j] << "  ";
    }
    cout << "\n";
    
return 0;
}