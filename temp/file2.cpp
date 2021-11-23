#include <iostream>
#include <stdlib.h>

int getRandomNumber()
{
    std::cout<<"I'm inside getRandomNumber...";
	int num = rand();
    std::cout<<"done!";
	return num;
}

int main()
{
    std::cout<"in main...\n";
	std::cout << getRandomNumber() << std::endl;
    std::cout<<"done main!\n";
}