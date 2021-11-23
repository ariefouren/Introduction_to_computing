#include "phoneNumber.h"
#include <iostream>

PhoneNumber getPhoneNumber()
{
	PhoneNumber num;
	std::cout << "Please enter phone number, with space between prefix and number: ";
	std::cin >> num.prefix >> num.number;
	return num;
}

void printPhoneNumber(const PhoneNumber& num)
{
	std::cout << num.prefix << "-" << num.number;
}