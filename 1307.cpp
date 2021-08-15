#include<iostream>

int main(int argc, char const *argv[])
{
    int input, output;
    std::cin >> input;
    while (input != 0)
    {
        output = output * 10 + input % 10;
        input /= 10;
    }
    std::cout << output;
    return 0;
}
