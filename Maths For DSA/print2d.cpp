#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> arr;

    int count = 1;

    for(int i = 0; i < 10; i ++)
    {
        vector<int> temp;
        for(int j = 0; j < 10; j ++)
        {
            temp.push_back(count ++);
        }
        arr.push_back(temp);
    }

    for(int i = 0; i < 10; i ++)
    {
        
        for(int j = 0; j < 10; j ++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
        
    }return 0;
}