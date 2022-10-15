#include<iostream>
using namespace std;

void update1(int *p)
{
    *p = (*p) * 2;
}

void increment(int **p)
{
    ++(**p);
}
int main()
{


    // Question 1

    // int first = 8, second = 18;
    // int *ptr = &second; // ampersand

    // *ptr = 9;
     
    // cout << first << " " << second << endl;



    // Question 2

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q) ++;
    // cout << first << endl;



    // Question 3

    // int first = 8;
    // int *p = &first;
    // cout << (*p) ++ << " ";
    // cout << first << endl;

    // Question 4

    // int *p = 0; // NULL pointer
    // int first = 110;
    // *p = first; // Error in mac : segmentation fault in windows program terminates with no output

    // cout << *p << endl;


    // Question 5

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;


    // Question 6

    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr) ++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;


    // Question 7

    // int arr[5];
    // int *ptr;

    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;


    // Question 8

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr + 1) << endl;


    // Question 9

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl;
    

    // Question 10

    // int arr[6] = {11, 21, 13};
    // cout << arr << endl;
    // cout << (arr + 1) << endl;
    // cout << *(arr + 2) << endl;

    
    // Question 11

    // int arr[6] = {11, 21, 31, 40};
    // int *p = arr;
    // int *ptr = arr + 2;
    // cout << p[2] << endl;
    // cout << ptr[0] << endl;
    // cout << ptr[1] << endl;
    // cout << ptr[2] << endl;


    // Question 12

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3) << endl;


    // Question 13

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr ++; // Error, can't update int[4] arr
    // cout << *ptr << endl;


    // Question 14

    // char ch = 'a';
    // char *ptr = &ch;
    // ch ++;
    // cout << *ptr << endl;


    // Question 15

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl; // abcde

    // Question 16

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p ++;
    // cout << p << endl;

    // Question 17

    // char str[] = "deepak";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;

    
    // Question 18

    // int i = 10;
    // update1(&i);
    // cout << i << endl;


    // Question 19

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q) ++ + 9;
    // cout << first << " " << second << endl;

    // Question 20

    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;


    // Question 21

    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num << endl;

    // Question 22

    // char ch[] = "abc";
    // void *ptr = &ch[0];
    // void *p = &ch;
    // void *p1 = ch;

    // cout << ptr << endl;
    // cout << p << endl;
    // cout << p1 << endl;

    cout << "Hello World" << endl;



return 0;
}