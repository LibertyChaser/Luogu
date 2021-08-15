#include<iostream>

int main(int argc, char const *argv[])
{
    int a[13], depoist = 0, balance = 0;
    for (int i = 1; i < 13; i++)
        std::cin >> a[i];
    for (int i = 1; i < 13; i++)
    {
        balance = balance + 300 - a[i];
        if (balance < 0)
        {
            std::cout << "-" << i;
            return 0;
        }
        depoist += (balance - balance % 100);
        balance %= 100;
    }
    std::cout << depoist * 1.2 + balance;
    return 0;
}
