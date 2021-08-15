#include<iostream>

using namespace std;

int MAX_NUM = 1000000;
bool prime[1000006];

bool is_prime_number(int input)
{
    for (int i = 2; i * i <= input; i++)
        if (input % i == 0)
            return 0;  
    return 1;
}

void is_prime_number2(int input) // ai's selection
{
    for (int i = 2; i <= MAX_NUM; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= MAX_NUM; i++)
    {
        if (!prime[i])
            continue;
        for (int j = i * 2; j <= MAX_NUM; j += i)
            prime[j] = 0;
    }   
}

int main(int argc, char const *argv[])
{
    int L, num = 0, sum = 0, i = 2;
    cin >> L;
    while (sum + i <= L)
    {
        if (is_prime_number(i))
        {
            sum += i;
            cout << i << endl;
            num ++;
        }
        i ++;
    }
    cout << num;
    return 0;
}
