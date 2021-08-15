#include<iostream>
#include<math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    std::cin >> a >> b >> c;
    double p = (a + b + c)/2;
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
