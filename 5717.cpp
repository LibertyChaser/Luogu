#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, length;
    cin >> a >> b >> c;
    length = a + b + c;
    a = max(a, max(b, c));
    c = min(b, c);
    b = length - a - c;
    if ( a >= b + c )
    {
        cout << "Not triangle";
        return 0;
    }
    int flag = pow(a, 2) - pow(b, 2) - pow(c, 2);
    if (flag == 0) cout << "Right triangle" << endl;
    else if (flag < 0) cout << "Acute triangle" << endl;
    else cout << "Obtuse triangle" << endl;
    if (a == b || a == c || b == c)
        cout << "Isosceles triangle" << endl;
    if (a == b && b == c)
        cout << "Equilateral triangle" << endl;
    return 0;
}
