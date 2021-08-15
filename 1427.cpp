#include<iostream>


int main(int argc, char const *argv[])
{
    int cnt = 0, a[1000];
    while (true)
    {
        std::cin >> a[cnt];
        if (a[cnt] == 0)
            break;
        cnt ++;
    }
    for (cnt --; cnt >= 0; cnt --)
    {
        std:: cout << a[cnt] << " ";
    }
    return 0;
}
