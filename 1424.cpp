#include<iostream>

int main(int argc, char const *argv[])
{
    int x, n;
    std::cin >> x >> n;
    int r = n % 7;
    if (r > 0)
    {
        if (r + x == 7 || x == 7)
            r -= 1;
        else if (r + x >= 8)
            r -= 2;
    }
    std::cout << (n / 7) * 1250 + r * 250;
    return 0;
}
