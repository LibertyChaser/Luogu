#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout << "Today, I ate " << n << " apple" << (n <= 1 ? "":"s") << ".";
    return 0;
}
