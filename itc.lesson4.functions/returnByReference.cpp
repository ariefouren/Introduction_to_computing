#include <iostream>

void printVariable(int var) {
	std::cout << "variable is: [" << var << "]\n";
}

int retByValueFunction(int x)
{
	return x;
}
/*
int& retByRefFunction(int x)
{
	return x;
}
*/
int main8()
{
	int a = 0;
	std::cout << "---- call return by value ----\n";
	
	std::cout << retByValueFunction(a) << std::endl;
	std::cout << "---- call return by reference ----\n";
	
//	std::cout << retByRefFunction(a) << std::endl;
	return 0;
}
 