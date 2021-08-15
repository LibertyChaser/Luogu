#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int year, month;
    cin >> year >> month;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)) day[2] = 29;
    cout << day[month];
    return 0;
}
