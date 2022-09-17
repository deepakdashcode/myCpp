#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Deepak";
    m[2] = "Dash";
    m[25] = "Hii";
    m[0] = "Test";
    //m.insert({3, "Tree"});
 // insert() is throwing error due to some reason, still don't know
    // map puts keys in sorted order

    cout << "Printing Keys\n";
    for(auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }    
    cout << endl;

    cout << "Finding 25 : " << m.count(25) << endl;


    // Deleting a key

    m.erase(25);

    cout << "Finding 25 : " << m.count(25) << endl;



// insert, erase, find, count all are of order O(log n)
// Yes, don't get shocked, it is not unordered map

    // find() returns iterator

    auto it = m.find(0);
    for(auto i = it; it != m.end(); i ++)
    {
        cout << (*i).first << endl;
    }
return 0;
}