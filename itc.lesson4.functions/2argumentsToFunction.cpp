#include <iostream>

int getRectangleArea(int height, int width)
{
	if (height <= 0 || width <= 0) {
		return -1;
	}
	return height*width;
}

int main3()
{
	int h, w;
	std::cin >> h >> w;
	int area = getRectangleArea(h, w);
	if (area < 0) {
		std::cout << "Error in parameters\n";
	}
	else {
		std::cout << "area of rectangle is: " << getRectangleArea(h, w) << std::endl;
	}
	return 0;
}