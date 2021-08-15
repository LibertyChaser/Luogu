#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    bool n1, n2;
    std::cin >> n;
    n1 = ! (n % 2);
    n2 = (n > 4 && n <= 12);
    printf("%d %d %d %d", n1 & n2, n1 | n2, (n1 + n2) == 1, !n1 & !n2);
    return 0;
}
