#include<iostream>
#include<set>
using namespace std;
int main()
{
    // Set puts the elements in a sorted order, onlt unique elements are stored in sets

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(8);

    for(int element : s)
    {
        cout << element << "  ";
    }
    cout << endl;


    // Defining iterator

    set<int>::iterator it = s.begin();

    it ++;

    s.erase(it);
    for(int element : s)
    {
        cout << element << "  ";
    }
    cout << endl;

    // count(element) returns 1 if present else 0

    cout <<"8 is present or not : "<< s.count(8) << endl;


    // find(element) function returns the iterator pointing to the element if it is present

    set<int>::iterator sIterator = s.find(6);


    for(auto i = sIterator; i != s.end(); i++)
    {
        cout << "Value : " << *i << "  ";
    }
    cout << "\n";
return 0;
}