#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t[8] = {0}, temp;
    for (int i = 1; i < 8; i++)
    {
        cin >> t[i] >> temp;
        t[i] += temp;
        if (t[i] > t[t[0]]) t[0] = i;
    }
    cout << (t[t[0]] <= 8 ? 0 : t[0]);
    return 0;
}
