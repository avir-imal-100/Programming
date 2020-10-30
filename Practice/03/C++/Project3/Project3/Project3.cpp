
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите два числа:" << '\n';
    cin >> a >> b;
    cout << a + b << '\n' 
         << a - b << '\n'
         << a * b << '\n'
         << a / b << '\n';
    double c, d;
    cout << "Введите два числа:" << '\n';
    cin >> c >> d;
    cout << c + d << '\n'
        << c - d << '\n'
        << c * d << '\n'
        << c / d << '\n';
    int e;
    double f;
    cout << "Введите два числа:" << '\n';
    cin >> e >> f;
    cout << e + f << '\n'
        << e - f << '\n'
        << e * f << '\n'
        << e / f << '\n';
    double g;
    int h;
    cout << "Введите два числа:" << '\n';
    cin >> g >> h;
    cout << g + h << '\n'
        << g - h << '\n'
        << g * h << '\n'
        << g / h << '\n';
}

