#ifndef _PHONENUMBER_H_
#define _PHONENUMBER_H_

struct PhoneNumber
{
	char prefix[4];
	long number;
};

PhoneNumber getPhoneNumber();
void printPhoneNumber(const PhoneNumber& num);

#endif //_PHONENUMBER_H_