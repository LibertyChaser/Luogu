#include<iostream>

int main(int argc, char const *argv[])
{
    int n, a[101], MAX_NUM = 0, MIN_NUM = INT32_MAX;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] > MAX_NUM)
            MAX_NUM = a[i];
        if (a[i] < MIN_NUM)
            MIN_NUM = a[i];
    }
    std::cout << MAX_NUM - MIN_NUM;
    return 0;
}
