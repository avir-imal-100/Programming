#include <iostream>

double IMT(double weight, double height) {
	return weight / (height * height);
}

void printIMT(double IMT) {
	if (IMT < 18.5)
		std::cout << "Underweight";
	else if (IMT < 25.0)
		std::cout << "Normal weight";
	else if (IMT < 30.0)
		std::cout << "Overweight";
	else
		std::cout << "Obesity";

	std::cout << std::endl;
}

int main() {
	double weight, height;
	std::cout << "Введите свой вес и рост через пробел: ";
	std::cin >> weight >> height;

	printIMT(IMT(weight, height / 100.0));
}