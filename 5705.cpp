#include<iostream>

int main(int argc, char const *argv[])
{
    /*
    std::string a;
    std::cin >> a;
    for (int i = a.size() - 1; i >= 0; i--)
        std::cout << a[i];
    
    */
   char a, b, c, d;
   scanf("%c%c%c.%c", &a, &b, &c, &d);
   printf("%c.%c%c%c", d, c, b, a);
   return 0;
}
