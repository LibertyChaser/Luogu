#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //在C/C++中以字符串末尾有不可见'\0',所以开数组存储字符的时候一定要多+1位留给计算机自动补'\0';
    char input[14], mod[12]="0123456789X";
    int sum = 0;
    cin >> input;
    //scanf("%s", input);
    for (int i = 0, j= 1; i < 12; i++)
    {
        if(input[i] == '-') continue;
        sum += (input[i] - 48) * j++;
    }
    if(mod[sum % 11] == input[12]) 
        cout << "Right";
    else 
    {
        input[12] = mod[sum % 11];
        cout << input;
    }
    return 0;
}
