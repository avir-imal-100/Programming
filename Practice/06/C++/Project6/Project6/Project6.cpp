
#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение переменных:\n";
	double a, b, c;
	cout << "Введите a\n";
	cin >> a;
	cout << "Введите b\n";
	cin >> b;
	cout << "Введите c\n";
	cin >> c;
	double D, x1, x2;
	if (a != 0) {
		D = (b * b) - (4 * a * c);
		if (D == 0) {
			x1 = -b / (2 * a);
			cout << x1 << " является единственным корнем этого уравнения\n";
		}

		if (D > 0) {
			x1 = (-b - sqrt(D)) / (2 * a);
			x2 = (-b + sqrt(D)) / (2 * a);
			cout << x1 << " и " << x2 << " являются корнями уравнения\n";
		}
		if (D < 0) { cout << "решений нет\n"; }
	}
	else {
		x1 = (-c / b);
		cout << x1 << endl;
	}
}