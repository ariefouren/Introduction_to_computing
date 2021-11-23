#ifndef _CONTACTINFO_H_
#define _CONTACTINFO_H_

#include "phoneNumber.h"

struct ContactInfo
{
	char* name;
	PhoneNumber* numbers;
	int numOfNumbers;
	char* email;
};

ContactInfo getContactInfo();
void printContactInfo(const ContactInfo& contact);

#endif //_CONTACTINFO_H_