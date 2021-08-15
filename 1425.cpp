#include<iostream>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int diff_hr = c - a, diff_min = d - b;
    if (diff_min < 0) {
        diff_hr --;
        diff_min += 60;
    }
    std::cout << diff_hr << " "<< diff_min;
    return 0;
}
