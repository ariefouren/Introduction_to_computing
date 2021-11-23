#include "phoneNumber.h"
#include "contactInfo.h"
#include <iostream>

int main()
{
	PhoneNumber num = getPhoneNumber();
	printPhoneNumber(num);

	ContactInfo contact = getContactInfo();
	printContactInfo(contact);

	return 0;
}