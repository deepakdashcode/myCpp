#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 5> arr = {1, 2, 3, 4, -1};

    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';

    // Accessing elements with at() attribute

    cout << arr.at(2) << "\n";
    
    cout << "Hello\n";

    cout << "Is array empty : " << arr.empty() << '\n';

    cout << "First Element : " << arr.front() << endl;
    cout << "Last element : " << arr.back() << endl;

    sort(arr.begin(), arr.end());


    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';


return 0;
}
