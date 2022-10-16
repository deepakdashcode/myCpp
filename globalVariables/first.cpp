#include<iostream>
using namespace std;

int score = 100;

void printScore()
{
    cout << "Inside printScore : " << score << endl;
}
int main()
{
    printScore();
    cout << "Inside main : " << score << endl;

return 0;
}