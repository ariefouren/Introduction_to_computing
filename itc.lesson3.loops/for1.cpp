#include <iostream>

int main3()
{
	int num;
	std::cout << "NUMBER\tSQUARE\tCUBE\n"; 
	std::cout << "------\t------\t----\n";

	for (num = 1; num < 11; num++) {
		std::cout << num << "\t";	
		std::cout << num * num << "\t";
		std::cout << num * num * num << "\n";
	}
	
	return 0;
}