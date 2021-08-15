#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, sumA = 0, sumB = 0, numB = 0;
    cin >> n >> k;
    for (int i = k; i <= n; i += k)
    {
        sumB += i;
        numB ++;
    }
    sumA = n * (n + 1) / 2 - sumB;
    printf("%.1f %.1f", sumB * 1.0 / numB, sumA * 1.0 / (n - numB));
    return 0;
}
