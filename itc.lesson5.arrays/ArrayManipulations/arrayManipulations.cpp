#include <iostream>
#include "arrayManipulations.h"

void fillArrayWithNumbers(int arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

int getNumOfDividedNumbersBy(int arr[], int size, int divBy)
{
	return -1;
}

double getAverageOfArrayNumbers(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	if (size != 0) {
		return (double)sum / size;
	}
	return 0; //???
}

