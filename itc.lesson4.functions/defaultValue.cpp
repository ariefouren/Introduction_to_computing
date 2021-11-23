#include <iostream>

void someFunction(int a, int b = 8, int c=0)
{
	std::cout << "a=" << a << ", b=" << b << ", c="<<c<<std::endl;
}

int main4()
{
	someFunction(1, 1, 1);
	someFunction(1, 1);
	someFunction(1);

	return 0;
}