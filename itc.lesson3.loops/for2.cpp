#include <iostream>

int main99()
{
	int number = 0;
	std::cout << "Enter a number: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			std::cout << i << " , ";
		}
	}
	std::cout << std::endl;

	return 0;
}