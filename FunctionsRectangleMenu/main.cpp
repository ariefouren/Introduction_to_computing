#include <iostream>
#include "functionsDeclarations.h"


int main() { 
	int width, height;

	std::cout << "please enter width: ";
	width = getPositiveNumberFromUser();	//jump ?? [address of getPositiveNumberFromUser]

	std::cout << "please enter height: ";
	height = getPositiveNumberFromUser();

	int option;
	do
	{
		option = handleMenuOptions(width,height);
	} while (option != 4);

	return 0;
}
