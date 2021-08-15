#include<iostream>

int main(int argc, char const *argv[])
{
    int n, cnt = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << cnt / 10 << cnt % 10;
            cnt ++;
        }
        std::cout << '\n';
    }
    cnt = 1;
    std::cout << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            std::cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << cnt / 10 << cnt % 10;
            cnt ++;
        }
        std::cout << '\n';
    }
    return 0;
}
