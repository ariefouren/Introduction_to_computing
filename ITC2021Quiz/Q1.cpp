#include <iostream>

void q1()
{
	int i;
	for (i = 100; i < 1000; ++i) {
		int d1 = i % 10;
		int d2 = (i % 100) / 10;
		int d3 = i / 100;
		if ((d1 + d2 + d3) % 3 == 0) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}

using namespace std;
void findDividindOfThree() {

    int num = 0, sum = 0, originalNum = 0, lastNum = 0;
    originalNum = num;
    if (num > 99 && num < 1000) {
        while (num > 0) {
            lastNum = num % 10;
            sum = sum + lastNum;
            num = num / 10;
        }
    }
    if (sum % 3 == 0) {
        std::cout << originalNum;
    }
}
