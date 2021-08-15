#include<iostream>

int main(int argc, char const *argv[])
{
    int n, k = 1;
    std::cin >> n;
    n /= 364;
    while (true)
    {   
        for (int x = 100; x >= 1; x--)
            if (x + 3 * k == n)
            {
                std::cout << x << std::endl << k;
                return 0;
            }
        k ++;
    }
    return 0;
}
