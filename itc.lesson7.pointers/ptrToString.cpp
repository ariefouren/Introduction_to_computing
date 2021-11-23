#include <iostream>

int main() {
	const char *strPtr = "Hello";	//Note: "Hello" is a constant string!
	// temporary pointer variable
	const char *t = strPtr;
	// print the string
	while (*t != '\0') {
		std::cout <<*t;
		// move the t pointer to the next memory location
		t++;
	}
	std::cout << std::endl;
	return 0;
}
