#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, temp;
    cin >> a >> b >> c;
    int hypotenuse = max(a, max(b, c)), shortest = min(a, min(b, c));
    for (int i = 1; i <= shortest; i++)
        if (hypotenuse % i == 0 && shortest % i == 0 )
            temp = i;
    cout << shortest / temp << "/" << hypotenuse / temp; 
    return 0;
}
