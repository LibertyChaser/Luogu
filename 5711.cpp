#include<iostream>

int main(int argc, char const *argv[])
{
    int year;
    std::cin >> year;
    std::cout << ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
    return 0;
}
