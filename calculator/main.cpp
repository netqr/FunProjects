#include <iostream>
#include <string>

#include "include/calc.h"


int main() {
	float num1;
	float num2;
	char operation;
	float result;

	std::cout << "Input first number: ";
	std::cin >> num1;
	std::cout << "\n";
	std::cout << "Input second number: ";
	std::cin >> num2;
	std::cout << "\n";
	std::cout << "Input desired operation: ";
	std::cin >> operation;
	std::cout << "\n";

	switch (operation) {
		case '+':
			result = calc::add(num1, num2);
			std::cout << num1 << " + " << num2 << " = " << result;
			break;
		case '-':
			result = calc::sub(num1, num2);
			std::cout << num1 << " - " << num2 << " = " << result;
			break;
		case '*':
			result = calc::mul(num1, num2);
			std::cout << num1 << " * " << num2 << " = " << result;
			break;
		case '/':
			result = calc::div(num1, num2);
			std::cout << num1 << " / " << num2 << " = " << result;
			break;
		default:
			std::cout << "Invalid operand!\n";
			break;
	}

	return 0;
}
