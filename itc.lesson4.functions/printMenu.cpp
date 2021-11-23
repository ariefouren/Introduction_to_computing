#include <iostream>

int printNumberSquare(int num)
{
	int sqr = num*num;
	return sqr;
}

int main2()
{
	int x = 7;
	std::cout << printNumberSquare(x);
	return 0;
}

