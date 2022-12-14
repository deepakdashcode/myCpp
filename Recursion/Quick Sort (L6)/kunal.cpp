#include<iostream>
using namespace std;


void print(int *arr, int start, int end)
{
    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}
void sort(int *arr, int low, int high)
{
    if(low >= high)
        return;
    
    int s = low, e = high;
    int mid = s + (e - s) / 2;
    int pivot = arr[mid];

    while(s <= e)
    {
        while(arr[s] < pivot)
        {
            s ++;
        }
        while(arr[e] > pivot)
        {
            e --;
        }

        if(s <= e)
        {
            swap(arr[s ++], arr[e --]);
        }

    }

    sort(arr, low, e);
    sort(arr, s, high);


}
int main()
{
    int arr[] = {1, 7, 8, 1, 3, 8, 2, 1, 0, 4, 1, 1, 7, 8, 1, 3, 8, 2, 1, 0, 4, 1};
    int n = 22;
    sort(arr, 0, n - 1);
    print(arr, 0, n - 1);


return 0;
}