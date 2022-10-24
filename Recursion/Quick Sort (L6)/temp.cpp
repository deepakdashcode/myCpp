#include<iostream>
using namespace std;

void print(int *arr, int start, int end)
{
    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}
void modify(int *arr, int low, int high, int pivotIntdex)
{
    int s = low, e = high;
    int pivot = arr[pivotIntdex];
    while(s <= e)
    {
        while(arr[s] < pivot)
            s ++;
        while(arr[e] > pivot)
            e --;
        
        if(s <= e)
            swap(arr[s ++], arr[e --]);
    }

}
int main()
{
    int arr[] = {1, 7, 8, 9, 3, 8, 2, 1, 0, 4, 1};
    int n = 11;
    modify(arr, 0, n - 1, 0);
    print(arr, 0, n - 1);

return 0;
}