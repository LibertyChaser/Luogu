#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, ans, sum_num, num, price, total_price;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> num >> price;
        sum_num = num; total_price = price;
        while (sum_num < n)
        {
            sum_num <<= 1;
            total_price <<= 1;
        }
        while (sum_num > n)
        {
            sum_num -= num;
            total_price -= price;
        }
        while (sum_num < n)
        {
            sum_num += num;
            total_price += price;
        }
        if (total_price < ans || ans == 0) ans = total_price;
    }
    cout << ans;
    return 0;
}
