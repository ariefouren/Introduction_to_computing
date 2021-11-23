#include <iostream>

int main2()
{
	char ans = 'n';
	while (ans != 'y' && ans != 'Y') 
	{
		std::cout << "Are you happy	today?\n";
		std::cin >> ans;
		switch (ans)
		{
		case 'n':
		case 'N':
			std::cout << "Smile and see if you feel better...\n";
			break;
		case 'y':
		case 'Y':
			break;
		default:
			std::cout << "Please answer y/n only\n";
		}
	}
	return 0;
}