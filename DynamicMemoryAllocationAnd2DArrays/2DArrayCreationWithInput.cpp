#include<iostream>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter row and column : ";
    cin >> row >> col;

    int **arr = new int*[row];

    for(int i = 0; i < row; i ++)
    {
        arr[i] = new int[col];
    }

    for(int r = 0; r < row; r ++)
    {
        for(int c = 0; c < col; c ++)
        {
            cin >> arr[r][c];
        }
    }

    for(int r = 0; r < row; r ++)
    {
        for(int c = 0; c < col; c ++)
        {
            cout << arr[r][c] << "  ";
        }
        cout << "\n";
    }


    // Releasing Memory

    for(int i = 0; i < row; i ++)
    {
        delete [] arr[i];
    }

    delete [] arr;

return 0;
}