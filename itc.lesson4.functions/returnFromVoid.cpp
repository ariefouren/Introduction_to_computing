#include <iostream>

void someVoidFunction(int x)
{
	if (x < 0) {
		return;
	}
	std::cout << "x is " << x << std::endl;
}

int main6() {
	someVoidFunction(5);
	someVoidFunction(-5);

	return 0;
}