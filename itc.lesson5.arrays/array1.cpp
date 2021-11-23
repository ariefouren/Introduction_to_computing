#include <iostream>

int main6()
{
	int numbers[10];
	int i;
	//init with randon numbers:
	for (i = 0; i < 10; ++i) {
		numbers[i] = rand();
	}
	//print the numbers:
	for (i = 0; i < 10; ++i) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
