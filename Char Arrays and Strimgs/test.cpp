#include<iostream>
using namespace std;

int len(char ch[])
{
    int ind = 0;
    for(int i = 0; ch[i] != '\0'; i++)
        ind ++;
    
    return ind;
}
void reverse(char arr[], int size)
{
    int l = 0, r = size - 1;
    cout << "Received String is " << arr << endl;
    while(l < r)
    {
        cout << "Reverse " << arr[l] << " with " << arr[r] << endl;
        cout << "String is " << arr << endl;
        swap(arr[l], arr[r]);

        l ++;
        r --;
    }

}
int main()
{
    char name[1];

    cout << "Enter name : ";
    cin >> name;

    //name[2] = '\0';

    cout << "Your name is : " << name << " Ji" << endl;

    //cout << name[4] << endl;

    int length = len(name);

    cout << length << endl;

    cout << name << endl;

    

 

    return 0;
}