#include <iostream>

struct Person {
	char name[30];
	int	id;
};

void initPerson(Person* person)
{
	std::cout << "Enter your name: ";
	std::cin >> person->name;
	std::cout << "ID: ";
	std::cin >> person->id;
}

void printPerson(const Person* person) {
	std::cout << "Name: " << person->name << "\n";
	std::cout << "ID: " << person->id << "\n";
}

int main1()
{
	const int NUM_PERSONS = 3;
	Person* arrayOfPersons = new Person[NUM_PERSONS];
	for (int i = 0; i < NUM_PERSONS; ++i) {
		initPerson(arrayOfPersons + i);
	}
	for (int i = 0; i < NUM_PERSONS; ++i) {
		printPerson(&arrayOfPersons[i]);
	}
	return 0;
}











void f()
{
	static int x = 0;
	std::cout << x << std::endl;
	x++;
}

int main() {
	f();
	f();
	f();
	x = 5;
}

