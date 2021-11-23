#include <iostream>

int main2()
{
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	if (number > 0) {
		std::cout << "The number " << number << " is positive\n";
	}
	else if (number == 0) {
		std::cout << "The number is zero\n";
	}
	else {
		std::cout << "The number " << number << "is negative\n";
	}
	return 0;
}