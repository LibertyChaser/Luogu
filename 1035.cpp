#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> k;
    double sum = 0;
    for (n = 1; sum < k; n++)
    {
        sum += 1.0 / n; // must use 1.0 as the dividend
    }
    cout << n - 1; // don't forget n is actually one more
    return 0;
}

//https://www.luogu.com.cn/problem/solution/P1035
//have another solution