#include <iostream>

int main() {

	// 2d array
	int num[3][4] = {
		{ 1, 2,  3,  4 },
		{ 5, 6,  7,  8 },
		{ 9, 10, 11, 12 }
	};

	int rows = 3, cols = 4, i, j;

	int *ptr = &num[0][0];

	// print the element of the array via pointer ptr
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			std::cout << *(ptr + i * cols +j) << "\t"; //num[i][j]
		}
		std::cout << std::endl;
	}

	return 0;
}