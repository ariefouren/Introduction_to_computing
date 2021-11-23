#include <iostream>

int main()
{
	//1. get a number from the user
	int n;
	std::cout<<"please enter a number: ";
    std::cin>>n;

	//2. calculate n!
	long long factorial = 1;
	//n*(n-1)*(n-2)*(n-3)*...*1
	//1*2*3*...*n
	for(int i=1; i<=n; i++){
		factorial = factorial * i;
	}
    std::cout<<"factorial of "<<n<<" is: "<<factorial<<std::endl;
	//factorial is n!

	//3. count tainling zeros
	//	loop until rightmost digit != 0:
	//	3.1 get the rightmost digit
	//		and check if it is zero
	//	3.2 remove the rightmost digit
	int counter = 0;
	while(factorial % 10 == 0){
		++counter;
		factorial = factorial/10;
	}
	//4. print result
	std::cout<<"number of tailing zeros is: "<<counter<<std::endl;
}
