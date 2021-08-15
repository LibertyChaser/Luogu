//#include<bits/stdc++.h>

#include<iostream>
#include<math.h>

int main(int argc, char const *argv[])
{
    double x;
    std::cin >> x;
    std::cout << ceil(log(1-x/100)/log(0.98));
    return 0;
}
