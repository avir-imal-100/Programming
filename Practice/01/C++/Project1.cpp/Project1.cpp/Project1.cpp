// Project1.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a = 2;
	cout << "Результат выражения 2+2*2 = " << a + (a * a) << '\n';
}

