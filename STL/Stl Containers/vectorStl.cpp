#include<iostream>
#include<vector>

// Vector is basically a dynamic array, it doubles it's size, each time it gets full
// It first creates a new array with double storage, copies the elements to new array and then dumps the previous array

using namespace std;
int main()
{
    vector<int> v; // initially capacity is zero
    
    vector<int> arr(5, 1); // Create a vector of size 5 and initialise every element with 1



    // capacity() denotes the memory alloted to the vector 
    // size() denotes the number of elements present in the vector
    cout << "capacity is : " << v.capacity()<< endl;

    v.push_back(1);
    cout << "capacity is : " << v.capacity()<< endl;
    cout << "size is : " << v.size() << endl;

    v.push_back(2);
    cout << "capacity is : " << v.capacity()<< endl; // size doubles and becomes 4
    cout << "size is : " << v.size() << endl;

    v.push_back(3);
    cout << "capacity is : " << v.capacity()<< endl;
    cout << "size is : " << v.size() << endl;

    v.push_back(4);
    cout << "capacity is : " << v.capacity()<< endl;
    cout << "size is : " << v.size() << endl;

    v.push_back(5);
    cout << "capacity is : " << v.capacity()<< endl; // size doubles and becomes 8
    cout << "size is : " << v.size() << endl;


    cout << v.at(3) << "\n";
    cout << v.front() << "\n";
    cout << v.back() << "\n";


    for(int element: v)
    {
        cout << element << "  ";
    }
    cout << "\n";

    v.pop_back();

    for(int element: v)
    {
        cout << element << "  ";
    }
    cout << "\n";



    // Clearing an array
    // After clearing, size becomes 0 but capacity is not 0
    v.clear();

    cout << v.capacity() << endl; // still 8
    cout << v.size() << endl; // changes to 0




    for(int ele : arr)
    {
        cout << ele << "  ";
    }
    cout << "\n";


    // Copying a vector

    // vector<int> v1(v); or vector<int> v1 = v2; // Dont worry, a copy will be created and not a new name to same reference
    
    // Making changes
    // cout << v1[0] << endl;
    cout << "Over " << endl;

    
return 0;
}