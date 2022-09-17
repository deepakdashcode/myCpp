#include<iostream>
#include<list>

using namespace std;

void print(list<int> ls)
{
    for(int ele : ls)
    {
        cout << ele << "  ";
    }
    cout << "\n";
}
int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    print(l);

    // begin(), end(), empty() --> O(1)
    // erase() O(n)

    l.erase(l.begin());
    cout << "After erase : " << endl;

    print(l);

    cout << "Size of list : " << l.size() << endl;



    // Initialising a list with all new elements

    list<int> ls(5, 100);
    print(ls);

    return 0;
}