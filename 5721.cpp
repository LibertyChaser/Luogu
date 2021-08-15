#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, num = 1;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num / 10 << num % 10;
            num ++;
        }
        cout << endl;
    }
    return 0;
}
