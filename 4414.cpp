#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[3];
    char A, B, C;
    cin >> a[0] >> a[1] >> a[2];
    cin >> A >> B >> C;
    sort(a, a+3);
    cout<< a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];
    return 0;
}
