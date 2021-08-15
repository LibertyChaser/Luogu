#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, total_coin = 0, n = 1;
    cin >> k;
    for (n = 1; k - n >= 0; k -= n++)
        total_coin += n * n;
    cout << total_coin + k * n;
    return 0;
}
