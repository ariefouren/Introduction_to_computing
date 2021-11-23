#include <iostream>

int* enlargeArray1(int* array, int currSize, int newSize) {
	int* temp = new int[newSize];
	for (int i = 0; i < currSize; i++) {
		temp[i] = array[i];
	}
	delete[] array;

	return temp;
}

void enlargeArray2(int** array, int currSize, int newSize) {
	int* temp = new int[newSize];
	for (int i = 0; i < currSize; i++) {
		temp[i] = (*array)[i];  // same as *(*array+i)
	}
	delete[] (*array);

	*array = temp;
}

void releaseArray(int* data)
{
	delete[] data;
}

int main()
{
	int num;
	std::cout << "Please enter how many students do you have: ";
	std::cin >> num;

	int* studentGrades = new int[num];

	for (int i = 0; i < num; ++i) {
		studentGrades[i] = rand()%100;
	}

	//we need extra 10 spaces...
	//hmmm...
	studentGrades = enlargeArray1(studentGrades, num, num + 10);
	//version 2 of this function:
	enlargeArray2(&studentGrades, num, num + 10);

	std::cout << std::endl;

	//don't forget to delete the array!
	delete[] studentGrades;
}
