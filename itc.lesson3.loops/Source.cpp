#include <iostream>

int main()
{
	int width, length;

	std::cin >> width >> length;

	for(int j = 1; j<= length; ++j){
		for (int i = 1; i <= width; ++i) {
			std::cout << "* ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}
