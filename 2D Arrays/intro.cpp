#include<iostream>

using namespace std;

void print2D(int arr[][2], int row, int col)
{
    for(int r = 0; r < row; r ++)
    {
        for(int c = 0; c < col; c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }
}

void rowWiseSum(int arr[][2], int row, int col)
{
    for(int r = 0; r < row; r ++)
    {
        int sum = 0;
        for(int c = 0; c < col; c++)
        {
            sum += arr[r][c];
        }
        cout << sum << endl;
    }
}

void columnWiseSum(int arr[][2], int row, int col)
{
    for(int c = 0; c < col; c++)
    {
        int sum = 0;
        for(int r = 0; r < row; r ++)
        {
            sum += arr[r][c];
        }
        cout << sum << endl;
    }
}


void largestRowSum(int arr[][2], int row, int col)
{
    long long int maxSum = INT32_MIN * col;
    int Maxrow = -1;
    for(int r = 0; r < row; r ++)
    {
        int sum = 0;
        for(int c = 0; c < col; c++)
        {
            sum += arr[r][c];

            if(sum > maxSum)
            { 
                maxSum = sum;
                Maxrow = r;
            
            } 
        }
        
    }

    cout << "Row : " << Maxrow << " has highest sum : " << maxSum << endl;
    
}
int main()
{
    int row, col;

    // cout << "Enter row and Column : ";
    // cin >> row >> col;
    // int arr[row][col];

    // // Taking input row - wise
    // for(int r = 0; r < row; r ++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         cout << "Enter the element at row : " << r << " and column : " << c << " : ";
    //         cin >> arr[r][c];
    //     }
    // }




    // // Taking input column - wise
    // for(int c = 0; c < col; c ++)
    // {
    //     for(int r = 0; r < row; r ++)
    //     {
    //         cin >> arr[r][c];
    //     }
    // }


    
    // // Printing 2D Array

    // for(int r = 0; r < row; r ++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         cout << arr[r][c] << "\t";
    //     }
    //     cout << endl;
    // }

    int newArr[3][2] = {1, 2, 3, 5, 7, 9};
    row = 3, col = 2;
    for(int r = 0; r < row; r ++)
    {
        for(int c = 0; c < col; c++)
        {
            cout << newArr[r][c] << "\t";
        }
        cout << endl;
    }

    cout << "\n\n";


    int newArr2[3][2] = {{1, 2}, {3 ,7}, {20, 25}};
    row = 3, col = 2;
    for(int r = 0; r < row; r ++)
    {
        for(int c = 0; c < col; c++)
        {
            cout << newArr2[r][c] << "\t";
        }
        cout << endl;
    }

    cout << "\n";

    rowWiseSum(newArr2, 3, 2);

    cout << "\n";

    columnWiseSum(newArr2 ,3 ,2);

   largestRowSum(newArr2, 3, 2);
    return 0;
}