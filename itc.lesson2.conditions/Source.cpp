#include <iostream>
int main5()
{
	int number;
	std::cin >> number;

	switch (number)
	{
	case 0:
		number = number + 1;
		std::cout << "number=" << number<<std::endl;
		break;
	case 2:
		number = number + 2;
		std::cout << "number=" << number << std::endl;
		break;
	}
	return 0;
}