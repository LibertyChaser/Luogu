#include<iostream>

int main(int argc, char const *argv[])
{
    unsigned long long n;
    std::cin >> n;
    std::cout << n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 << std::endl;
    return 0;
}
