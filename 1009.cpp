#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int add_factorial[1005] = {0}, factorial[1005] = {0}, n, dgt_num;
    cin >> n;
    add_factorial[0] = factorial[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 100; j++) // solve i!, and every digits times i
            factorial[j] *= i;
        
        for (int j = 0; j < 100; j++) // carry in every digits 
            if (factorial[j] > 9)
            {
                factorial[j + 1] += factorial[j] / 10;
                factorial[j] %= 10;
            }
        
        for (int j = 0; j < 100; j++) // add the i! to A
        {
            add_factorial[j] += factorial[j];
            if (add_factorial[j] > 9)
            {
                add_factorial[j + 1] += add_factorial[j] / 10;
                add_factorial[j] %= 10;
            }
        }   
    }

    for (int i = 100; i >= 0 && add_factorial[i] == 0; i--)
        dgt_num = i;
        
    for (int i = dgt_num - 1; i >= 0; i--)
        cout << add_factorial[i];

    return 0;
}
