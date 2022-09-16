#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int i = 0, j = 1;
    while(j < size)
    {
        swap(arr[i], arr[j]);
        i += 2;
        j += 2;
    }
}
void printArr(int arr[], int size)
{
    for(int i = 0;i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isUnique(int arr[], int size, int element)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(element == arr[i])
        {
            count ++;
        }
        if(count > 1)
        {
            return false;
        }
    }
    return (count == 1);
}
void nonRepeatingNums(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(isUnique(arr, size, arr[i]))
            cout << arr[i] << endl;
    }
}
bool isPresent(int arr[], int size, int element)
{
    for(int i = 0;i < size; i++)
    {
        if(arr[i] == element)
            return true;
    }
    return false;
}
void duplicate(int arr[], int size)
{ // Idiotic Algorithm O(n ^ 3) time and O(n) space
    int newArr[size];
    int realSize = 0;
    int index = 0;
    for(int i = 0; i < size; i++)
    {
        if(!isUnique(arr, size, arr[i]))
        {
            if(!isPresent(newArr, realSize, arr[i]))
                {
                    cout << arr[i] << endl;
                    realSize ++;
                    newArr[index ++] = arr[i];
                }

        }
    }
}

void arrayIntersection(int arr1[], int size1, int arr2[], int size2)
{
    int minSize = min(size1, size2);
    int ansArray[minSize];
    int ansSize = 0;
    int index = 0;
    if(size1 <= size2)
    {
        for(int i = 0; i < minSize; i ++)
        {
            int element = arr1[i];
            if(isPresent(arr2, size2, element))
            {
                if(!isPresent(ansArray, ansSize, element))
                {
                    ansArray[index ++] = element;
                    ansSize ++;
                }
            }
        }
    }else
    {
        for(int i = 0; i < minSize; i ++)
        {
            int element = arr2[i];
            if(isPresent(arr1, size1, element))
            {
                if(!isPresent(ansArray, ansSize, element))
                {
                    ansArray[index ++] = element;
                    ansSize ++;
                }
            }
        }
    }
    printArr(ansArray, ansSize);


}

void twoSum(int arr[], int size, int target)
{
    for(int i = 0 ; i < size; i++)
    {
        for(int j = 0;j < size;j ++)
        {
            if((j != i) && (arr[i] + arr[j] == target))
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}
void sort0_and_1(int arr[], int size)
{
    int i = 0, j = size - 1;
    while(i <= j)
    {
        if(arr[i] == 1)
        {
            while(i <= j)
            {
                if(arr[j] == 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
                j --;
            }
        }
        i ++;

    }
}
int main()
{

    int arr[] = {1, 1, 2, 3, 4,4, 4,4,4, 5};
    //swapAlternate(arr, 5);
    //printArr(arr, 5);
    // nonRepeatingNums(arr, 10);
    // cout << "End of repreating nums\n";
    // duplicate(arr, 10);

    // int arr1[] = {1, 3, 2 , 1, 1, 2, 65,4, 6, 4 ,2, 3, 3};
    // int arr2[] = {9, 65, 6, 3 ,7, 4 , 22, 3};
    // arrayIntersection(arr1, 13, arr2, 8);


    int tSum[] = {1, 4 ,5, 3 ,2 ,2 ,5, 9};
    twoSum(tSum, 8, 11);

    int arr1[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1};
    sort0_and_1(arr1, 12);
    printArr(arr1, 12);
return 0;
}