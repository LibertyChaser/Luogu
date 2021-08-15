#include<iostream>
#include<math.h>

int main(int argc, char const *argv[])
{
    int s, v, t, h, m;
    std::cin >> s >> v;
    //t = ceil(s / v);
    if (s % v ==0)
    {
        t = s / v;
    }else
    {
        t = s / v + 1;
    }
    if (t <= 470)
    {
        h = (470 - t) / 60;
        m = 470 - t - h * 60;
        std::cout << 0 << h << ":" << m / 10 << m % 10;
        return 0;
    }
    h = (470 + 24 * 60 - t) / 60;
    m = (24 * 60 - t + 470 - h * 60);
    std::cout << h / 10 << h % 10 << ":" << m / 10 << m % 10;
    return 0;
}
