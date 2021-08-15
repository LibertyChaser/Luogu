#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, d = 1;
    cin >> a;
    while (a != 1)
    {
        a >>= 1;
        d++;
    }
    cout << d;
    return 0;
}
