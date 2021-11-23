#include <iostream>

int main7()
{
	int divNum = 15;

	int number = divNum;

	while (number <= 20*divNum) {
		std::cout << number << ",";
		number += divNum;
	}
	std::cout << std::endl;
	return 0;
}