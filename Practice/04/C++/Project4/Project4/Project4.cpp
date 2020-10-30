
#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	int a;
	int b;
	int c;
	cout << "Введите значение переменных a и b:" << '\n';
	cin >> a >> b;
	c = a;

	a = b;

	b = c;
	cout << a << '\n' << b;
}
