#include<iostream>

int main(int argc, char const *argv[])
{
    long long n, a = 1, b = 1, c = 0;
    std::cin >> n;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    std::cout << c << ".00";
    return 0;
}
