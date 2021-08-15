#include<iostream>

int n, num_1, num_2, continuation = 1, max_continuation;

int main(int argc, char const *argv[])
{
    std::cin >> n >> num_1;
    for (int i = 2; i <= n; i++)
    {
        std::cin >> num_2;
        if (num_2 - num_1 == 1)
            continuation ++;
        else continuation = 1;
        if (continuation > max_continuation)
            max_continuation = continuation;
        num_1 = num_2;
    }
    std::cout << max_continuation;
    return 0;
}
