#include<iostream>

using namespace std;

const int MAX_NUM = 100000005;

int vst[MAX_NUM]; // default is 0; when been visted, then marked as largest number
int prime_number_list[MAX_NUM]; // record prime number in existing order
bool is_prime_number[MAX_NUM]; // if i is prime number, is_prime_number[i] = 1

void prime_number(int upper_limit)
{
    int cnt = 0;
    for (int i = 2; i <= upper_limit; i++)
    {
        if (!vst[i])
            prime_number_list[cnt++] = i, is_prime_number[i] = 1;
        for (int j = 0; j < cnt && i * prime_number_list[j] <= upper_limit; j++)
        {
            vst[i * prime_number_list[j]] = i;
            if (i % prime_number_list[j] == 0)
                break;
        }
    }
}

bool is_palindrome(int input)
{
    int _input = input, palindrome = 0; // digit_num = 0;
    while (_input != 0)
    {
        palindrome = palindrome * 10 + _input % 10;
        _input /= 10;
        // digit_num ++;
        // if digit_num % 2 == 0 can't be prime number
    }
    if (palindrome == input)
        return 1;
    else 
        return 0;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    if (a >= 10000000)
        return 0;
        
    a = a / 2 * 2 + 1;

    if (b > 10000000)
        b = 10000000;

    prime_number(b);

    while (a <= b)
    {
        if (is_palindrome(a) && is_prime_number[a])
            cout << a << '\n';
            // use std::endl might cause perfomance loss
        a += 2;
    }
    return 0;
}
