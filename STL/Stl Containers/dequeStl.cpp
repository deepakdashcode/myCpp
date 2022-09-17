#include<iostream>
#include<deque>

// Deque is doubly ended queue
using namespace std;
void print(deque<int> d)
{
    for(int ele: d)
    {
        cout << ele << " " ;
    }
    cout << "\n";
}
int main()
{
    // push_back(), push_front(), pop_front(), pop_back()

    deque<int> d ;
    d.push_back(1);
    d.push_front(10);
    d.push_back(15);
    print(d);

    // d.pop_front();
    // print(d);
    
    cout << "First element is : " << d.front() << "\n";

    cout << "Last element is : " << d.back() << "\n";

    cout << "Second element is : " << d.at(1) << "\n";

    // empty() and size() function worl as expected but in case of erase(), we need to specify range

    // Printing before erase

    print(d);
    cout << "Size before erase() : " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 2); // deletes 2 elements, last one excluded.
    cout << "Size after erase() : " << d.size() << endl;

    print(d);



return 0;
}