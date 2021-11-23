#include "contactInfo.h"
#include <iostream>
#include <string.h>

char* getName()
{
	char buffer[100];
	std::cout << "Please enter your name: ";
	std::cin >> buffer;

	char *name = new char[strlen(buffer) + 1];
	strcpy_s(name, strlen(buffer)+1, buffer);

	return name;
}

void getContactPhoneNumbers(PhoneNumber** numbers, int& numOfNumbers)
{
	int n;
	PhoneNumber* tempNumbers;
	std::cout << "How many numbers do you want to insert? ";
	std::cin >> n;
	//should check validity of n here...
	tempNumbers = new PhoneNumber[n];

	for (int i = 0; i < n; ++i) {
		tempNumbers[i] = getPhoneNumber();
	}

	*numbers = tempNumbers;
	numOfNumbers = n;
}

void getEmail(char** email)
{
	char buffer[100];
	std::cout << "Please enter your email address: ";
	std::cin >> buffer;

	*email = new char[strlen(buffer) + 1];
	strcpy_s(*email, strlen(buffer) + 1, buffer);
}

ContactInfo getContactInfo()
{
	ContactInfo contact = { NULL,NULL,NULL };
	
	contact.name = getName();

	getContactPhoneNumbers(&contact.numbers,contact.numOfNumbers);
	getEmail(&contact.email);
	return contact;
}

void printContactInfo(const ContactInfo& contact)
{
	std::cout << "Name: "<< contact.name << "\n";
	std::cout << "Your numbers are:\n";
	for (int i = 0; i < contact.numOfNumbers; ++i) {
		printPhoneNumber(contact.numbers[i]);
		std::cout << "\n";
	}
	std::cout << "Email: " << contact.email << std::endl;
}