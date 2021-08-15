#include<iostream>

int main(int argc, char const *argv[])
{
    float a;
    int b;
    std::cin >> a >> b;
    printf("%.3f\n%d", a / b, b * 2);
    return 0;
}
