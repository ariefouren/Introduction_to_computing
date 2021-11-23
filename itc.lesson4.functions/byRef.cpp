#include <iostream>

int main()
{
	int myArray[10] = {/*...*/ };

	for (int i = 0; i < 10; ++i) {
		if (myArray[i] == myArray[i + 1]) {
			std::cout << "continue to check...\n";
		}
		else {
			std::cout << "Not all elements equal!\n";
			break;
		}
	}
}
