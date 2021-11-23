#include <iostream>

void printVariables(int var1, int var2) {
	std::cout << "arguments are: [" << var1 << " , " << var2 << "]\n";
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printVariables(a, b);
}

int main7()
{
	int x = 5, y = 10;
	swap(x, y);
	printVariables(x, y);
	return 0;
}