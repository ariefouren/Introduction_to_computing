#include <iostream>

int main4()
{
	int i;
	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 == 0 && i % 13 == 0) {
			std::cout << "number is: " << i << std::endl;
			//break;
		}
	}
	return 0;
}