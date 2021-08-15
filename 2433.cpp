#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
        // attention to " "
    } else if (T == 3) {
        int a = 14 / 4;
        cout << a << endl << a * 4 << endl << 14 % 4;
    } else if (T == 4) {
        double b = 500.0 / 3; 
        // 500.0 not 500
        printf("%.3f", b);
    } else if (T == 5) {
        cout << (260 + 220)/(12 + 20);
    } else if (T == 6) {
        cout << sqrt(6 * 6 + 9 *9);
        // ^ ?
    } else if (T == 7) {
        cout << 110 << endl << 90 << endl << 0;
    } else if (T == 8) {
        double pi = 3.141593;
        cout << pi * 10 << endl << pi * 25 << endl << 4.0 / 3 *pi * 125 << endl;
        // 4.0 not 4
    } else if (T == 9) {
        cout << 22 << endl;
    } else if (T == 10) {
        cout << 9;
    } else if (T == 11) {
        cout << 1.0 * 100 / 3;
    } else if (T == 12) {
        cout<<int('M'-'A') + 1 << endl << char(18 + 'A' - 1);
    } else if (T == 13) {
        double pi = 3.141593;
        cout << int(pow(4.0 / 3 * pi *(4 * 4 * 4 + 10 * 10 * 10), 1.0 * 1/3));
    } else if (T == 14) {
        int s, ans;
        for(int i=1;i<=110;i++){
            s = 120 - i;
            ans = s * i;
            if(ans == 3500) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}