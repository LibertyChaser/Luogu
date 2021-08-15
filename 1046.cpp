#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[10], highest, n = 0;
    for (int i = 0; i < 10; i++)
        cin >> num[i];
    cin >> highest;
    for (int i = 0; i < 10; i++)
        if (num[i] <= highest + 30) n++;
    cout << n;
    return 0;
}
