#include<iostream>
#include<vector>

using namespace std;
class matrix
{
    public:
    vector<vector<int>> array;
    int row, column;

    matrix(vector<vector<int>> matrix)
    {
        this->array = matrix;
        this->row = matrix.size();
        this->column = matrix[0].size();
    }

    matrix operator+(matrix const &obj)
    {
        // Assuming that they can be added
        vector<vector<int>> ans;
        for(int i = 0; i < row; i ++)
        {
            vector<int> temp;
            for(int j = 0; j < column; j ++)
                temp.push_back(array[i][j] + obj.array[i][j]);
            
            ans.push_back(temp);
        }

        return ans;

    }
    matrix operator-(matrix const &obj)
    {
        // Assuming that they can be added
        vector<vector<int>> ans;
        for(int i = 0; i < row; i ++)
        {
            vector<int> temp;
            for(int j = 0; j < column; j ++)
                temp.push_back(array[i][j] - obj.array[i][j]);
            
            ans.push_back(temp);
        }

        return ans;

    }

    bool operator== (matrix const &obj)
    {
        if(row != obj.row || column != obj.column)
            return false;
        for(int i = 0; i < row; i ++)
        {
            for(int j = 0; j < column; j ++)
            {
                if(array[i][j] != obj.array[i][j])
                    return false;
            }
        }

        return true;
    }

    bool operator!= (matrix const &obj)
    {
        if(row != obj.row || column != obj.column)
            return true;
        for(int i = 0; i < row; i ++)
        {
            for(int j = 0; j < column; j ++)
            {
                if(array[i][j] != obj.array[i][j])
                    return true;
            }
        }

        return false;
    }

    int getValue(matrix const &obj, int rowOfFirst, int columnOfSecond, int fixedColumns)
    {
        int ans = 0;
        for(int i = 0;i < fixedColumns; i++)
        {
            ans = ans + (this->array[rowOfFirst][i] * obj.array[i][columnOfSecond]);
        }
        return ans;
    }
    matrix operator*(matrix const &obj)
    {
        // matrix multiplication
        // this -> column must eb equal to obj.row
        vector<vector<int>> ans;

        for(int i = 0; i < this->row; i ++)
        {
            vector<int> temp;
            for(int j = 0; j < obj.column; j++)
            {
                temp.push_back(this->getValue(obj, i, j, this->column));
            }
            ans.push_back(temp);
        }
        return ans;
    }
    matrix operator*(int const &num)
    {
        vector<vector<int>> ans;
        for(int i = 0; i < row; i ++)
        {
            vector<int> temp;
            for(int j = 0; j < column; j++)
            {
                temp.push_back(array[i][j] * num);
            }
            ans.push_back(temp);
        }

        return matrix(ans);
    }
    
    void print()
    {
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j ++)
            {
                cout << array[i][j] << "\t";
            }
            cout << "\n";
        }
    }


};

int main()
{
    vector<vector<int>> vec{ { 1, 2, 3 }, 
                         { 4, 5, 6 }, 
                         { 7, 8, 9} };

    matrix A(vec);
    matrix B = A + A;

    B.print();
    cout << (A == A) << endl;
    cout << (A != A) << endl;

    matrix c = A * 5;
    c.print();

    vector<vector<int>> m1{ { 1, 2}, 
                            { 4, 5}, 
                            { 7, 8}};
    
    vector<vector<int>> m2{
        {2, 3},
        {2, 1}
    };

    matrix mat1(m1);
    matrix mat2(m2);

    matrix mat3 = mat1 * mat2;
    mat3.print();
    return 0;
}