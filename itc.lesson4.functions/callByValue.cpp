#include <iostream>

void someFunction(int x)
{
	x++;
	std::cout << "x in someFuncion is: " << x << std::endl;
}

int main5()
{
	int y = 8;
	someFunction(y);
	std::cout << "y in main is: " << y << std::endl;
	return 0;
}