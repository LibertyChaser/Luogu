#include<iostream>

int n, a[1000], b[1000];

int main(int argc, char const *argv[])
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                b[i] ++;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << b[i] << " ";
    }
    return 0;
}
