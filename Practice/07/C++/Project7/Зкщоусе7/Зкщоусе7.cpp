﻿
#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "Выберете способ вычисления площади: \n";
	cout << "1.По координатам\n";
	cout << "2.По сторонам\n";
	int w;
	cin >> w;
	double x1, y1, x2, y2, x3, y3;
	double a, b, c, p;
	double S;
	if (w == 1) {
		cout << "Введите координаты точки А (сначала x потом y):\n";
		cin >> x1;
		cin >> y1;
		cout << "Введите координаты точки B (сначала x потом y):\n";
		cin >> x2;
		cin >> y2;
		cout << "Введите координаты точки C (сначала x потом y):\n";
		cin >> x3;
		cin >> y3;
		cout << '\n';
		a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		if ((a < b + c) & (c < b + a) & (b < c + a)) {
			cout << "Треугольник существует\n";
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S << endl;
		}
		else { cout << "Треугольник не существует\n"; }
	}

	if (w == 2) {
		cout << "Введите длины сторон\n";
		cin >> a >> b >> c;
		if ((a < b + c) & (c < b + a) & (b < c + a)) {
			cout << "Треугольник существует\n";
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S << endl;
		}
		else {
			cout << "Треугольник не существует\n";
		}
	}
}