#include <iostream>

int main()
{
	int userId;
	std::cout << "please enter your id (between 100 and 300): ";
	std::cin >> userId;
	if (userId < 100 || userId > 300) {
		std::cout << "Wrong Id. Should be between 100 and 300!\n";
	}
	else {
		std::cout << "Great!\n";
	}
	return 0;
}

class SabaException
{
public:
	virtual void print() const = 0;
};

class AbaException : public SabaException
{
public:
	void print() const { std::cout << "Aba\n"; }
};

class BenException : public AbaException
{
public:
	void print() const { std::cout << "Ben\n"; }
};

void f1() {
	throw (BenException());
}

void f2()
{
	try {
		f1();
	}
	catch (AbaException& err) {
		std::cout << "catch f2" << std::endl;
		throw (err);
	}

}