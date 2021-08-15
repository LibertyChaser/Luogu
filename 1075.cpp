#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    for (int i = 2; i <= n; i++)
        if (n % i == 0)
        {
            std::cout << n / i;
            break;
        }
    return 0;
}
