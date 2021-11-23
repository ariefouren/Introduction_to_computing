#include <iostream>

int main9()
{
	int age;
	std::cout << "please enter your age: ";
	std::cin >> age;
	if (age > 0)
	{
		std::cout << "you look younger\n";
	}
	else
	{
		std::cout << "age must be positive!!!\n";
	}
	std::cout << "bye!\n\n\n\n\n\n\n";
	return 0;
}


int main8()
{
	int x = 0;
	if (x > 0) {
		std::cout << "x=" << x;
		x = x + 1;
	}
	else {
		x = x + 2;
	}
	return 0;
}
