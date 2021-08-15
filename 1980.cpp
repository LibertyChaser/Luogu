#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, current_num, the_unit, flag;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        current_num = i;
        while (current_num != 0)
        {
            the_unit = current_num % 10;
            current_num /= 10;
            if (the_unit == x) 
                flag ++;
        }
    }
    cout << flag;
    return 0;
}
