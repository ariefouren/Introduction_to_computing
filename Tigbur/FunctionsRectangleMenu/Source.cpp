#include <iostream>

void getPositiveNumberFromUser(int& num)
{
	do {
		std::cin >> num;
	} while (num <= 0);
}

void printMenu()
{
	std::cout << "Choose an option from the menu:\n";
	std::cout << "(1) perimeter\n";
	std::cout << "(2) area\n";
	std::cout << "(3) draw rectangle\n";
	std::cout << "(4) exit\n";
}

int getRectanglePerimeter(int w, int h) {
	return 2 * (w + h);
}

int getRectangleArea(int w, int h) {
	return w * h;
}

void printRectangle(int w, int h, char c) {
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			std::cout << c;
		}
		std::cout << std::endl;
	}
}

int handleMenuOptions(int width, int height)
{
	printMenu();

	int option;
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "perimeter = " << getRectanglePerimeter(width, height) << std::endl;
		break;
	case 2:
		std::cout << "area = " << getRectangleArea(width, height) << std::endl;
		break;
	case 3:
		char c;
		std::cout << "enter a character: ";
		std::cin >> c;
		printRectangle(width, height, c);
		break;
	case 4:
		std::cout << "Good Bye!\n";
		break;
	default:
		std::cout << "Wrong option!\n";
	}
	return option;
}

