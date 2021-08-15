#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double m, n, bmi;
    cin >> m >> n;
    bmi = m / (n * n);
    if (bmi < 18.5) cout << "Underweight";
    if (bmi >= 24) cout << bmi << endl << "Overweight";
    if (bmi < 24 && bmi >= 18.5) cout << "Normal";
    return 0;
}
