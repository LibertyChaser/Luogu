#include<iostream>

int main(int argc, char const *argv[])
{
    int m, t, s;
    std::cin >> m >> t >> s;
    if (m == 0 || t == 0)
    {
        std::cout << 0;
        return 0;
    }
    if (s % t == 0)
    {
       std::cout << std::max(m - (s / t), 0);
    }else{
        std::cout << std::max(m - (s / t) - 1, 0);
    }
    return 0;
}
