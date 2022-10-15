#include<iostream>
using namespace std;

// int* fun()
// {
//     int x = 10;
//     return &x;
// }
int main()
{

    // Case 1 : Functions
    // int *ptr = fun();
    // cout << *ptr << endl;



    // Case 2 : Dynamlc memory a ocatlon.
    // int *p = (int * ) malloc(sizeof(int));
    // // after calling free() p becomes a dangling pointer
    // free(p) ;
    // //now p no more a dangling pointer.
    // p = NULL;


    // Case 3 : Variable goes out of scope

    int *p = 0;
    {
        int a = 50;
        p = &a;
    }
    cout << *p << endl;
    
return 0;
}