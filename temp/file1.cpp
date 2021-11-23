#include <iostream>

int main()
{
	int num;
	std::cout << "NUMBER\tSQUARE\tCUBE\n"; 
	std::cout << "------\t------\t----\n";

	for (num = 1; num < 10000; num++) {
		std::cout << num << "\t";	
		std::cout << num * num << "\t";
		std::cout << num * num * num << "\n";
	}
	
	return 0;
}
