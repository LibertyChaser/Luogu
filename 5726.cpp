#include<iostream>

int main(int argc, char const *argv[])
{
    int n, MAX_NUM = 0, MIN_NUM = INT32_MAX, total_grade = 0, temp;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        total_grade += temp;
        if (temp > MAX_NUM)
        {
            MAX_NUM = temp;
        }
        if (temp < MIN_NUM)
        {
            MIN_NUM = temp;
        }
    }
    printf("%.2f", (total_grade - MAX_NUM - MIN_NUM) / (n - 2.0));
    return 0;
}
