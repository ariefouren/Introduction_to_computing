#include <iostream>
#include "arrayManipulations.h"

const int SIZE = 3;

int main()
{
	//1. declare an array of SIZE integers
	int arr[SIZE];

	int ch = '0';
	ch = 0;
	ch = '\0';


	//2. fill the array with 10 numbers
	std::cout << "Please enter "<< SIZE<<" integer numbers:\n";
	fillArrayWithNumbers(arr, SIZE);
	std::cout << arr << std::endl;
	std::cout << &arr[0] << std::endl;
	std::cout << &arr[1] << std::endl;

	//3. calculate the average of the array's elements
	double avg = getAverageOfArrayNumbers(arr, SIZE);
	std::cout << "The average is: " << avg << std::endl;

	//4. count how many elements in the array divided by x.
	int x = 7;
	int count = getNumOfDividedNumbersBy(arr, SIZE, x);
	std::cout << "Number of elements diveded by " << x << " is: " << count << std::endl;

	return 0;
}