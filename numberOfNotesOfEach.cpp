/*
input the total amount and find the number of 100, 50, 20 and 1 rs notes required to make that amount

Note : Use 100 rs max and when u can't anymore then go to 50


*/
#include<iostream>
using namespace std;
int main()
{
    int note;
    cin >> note;
    int num = 100;
    switch(num)
    {
        case 100: int noOfHundered = note / 100;
                  note = note / 100;
                  cout << "Hundered : " << noOfHundered << endl;
        
        case 50: int noOfFifty = note / 50;
                  note /= 50;
                  cout << "Fifty : " << noOfFifty << endl;
        
        case 20: int noOfTwenty = note / 20;
                  note /= 20;
                  cout << "Twenty : " << noOfTwenty << endl;
        case 1: int noOfOne = note;
                    cout << "Number of One : " << noOfOne << endl;
    }

return 0;
}