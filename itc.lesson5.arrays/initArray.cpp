#include <iostream>


int main9()
{
	int i;

	int array1[] = { 1,2,3,4 };
	for (i = 0; i < 4; ++i) {
		std::cout << array1[i] << " ";
	}
	std::cout << std::endl;

	int array2[5] = { 1,2,3 };
	for (i = 0; i < 5; ++i) {
		std::cout << array2[i] << " ";
	}
	std::cout << std::endl;

	int array3[5] = {};
	for (i = 0; i < 5; ++i) {
		std::cout << array3[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}