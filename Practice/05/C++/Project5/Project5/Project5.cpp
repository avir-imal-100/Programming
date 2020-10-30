
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double x0;
	double v0;
	double t;
	double a = 9.8;
	cout << "Формула для вычисления x = x0 + v0 * t + a * t * t/2\n";
	cout << "Введите знвчения x0, v0 и t\n";
	cin >> x0 >> v0 >> t;
	x = x0 + v0 * t + a * t * t / 2;
	cout << x;
}
