#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите первое число (нажмите Enter)\n";
	double a, b;
	cin >> a;
	cout << "Введите второе число (нажмите Enter)\n";
	cin >> b;
	cout << "Выберите операцию:\n";
	double x, y;
	cout << "1.Сумма\n";
	cout << "2.Разность\n";
	cout << "3.Умножение\n";
	cout << "4.Деление\n";

	cin >> x;
	if (x == 1) {
		cout << "Ответ: ";
		y = a + b;
		cout << y << endl;
	}
	if (x == 2) {
		cout << "Ответ: ";
		y = a - b;
		cout << y << endl;
	}
	if (x == 3) {
		cout << "Ответ: ";
		y = a * b;
		cout << y << endl;
	}
	if (x == 4) {
		cout << "Ответ: ";
		y = a / b;
		cout << y << endl;
	}

}