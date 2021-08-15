#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    printf("%.1lf", (n <= 150 ? n * 0.4463 : 150 * 0.4463 + (n <= 400 ? (n - 150) * 0.4663 : (400 - 150) * 0.4663+(n-400)*0.5663)));
    return 0;
}
