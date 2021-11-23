#include <iostream>

int main5()
{
	int maxMult = 50;
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			if (i*j > maxMult) {
				break;
			}
			std::cout << i*j << " , ";
		}
		std::cout << "\n";
		if (i > 50) {
			break;
		}
	}
	return 0;
}