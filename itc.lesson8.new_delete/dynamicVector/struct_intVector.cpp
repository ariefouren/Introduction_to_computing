#include <iostream>

struct Data
{
	const char* name;
	size_t id;
};

struct Vector
{
	Data arr[10];
	size_t usedSize;
	size_t capacity;
};

void initVector(Vector& vec, size_t size = 0)
{
	if (size!=0) {
		vec.capacity = size;
		vec.arr = new Data[size];
		vec.usedSize = 0;
	}
	else {
		vec.usedSize = 0;
		vec.capacity = 0;
		vec.arr = NULL;
	}
}

void pushBackElement(Vector& vec, const Data& val)
{
	if (vec.usedSize == vec.capacity) {
		//need to enlage the vector's size and then insert the new value
		Data* temp = new Data[2*vec.capacity];
		for (int i = 0; i < vec.capacity; ++i) {
			temp[i] = vec.arr[i];
		}
		delete[] vec.arr;
		vec.arr = temp;
		vec.capacity *= 2;
	}
	vec.arr[vec.usedSize] = val;
	vec.usedSize++;
}

void resetVector(Vector& vec)
{
	vec.usedSize = 0;
}

void deleteVector(Vector& vec)
{
	if (vec.capacity!=0){
		delete[] vec.arr;
		vec.arr = NULL;
		vec.capacity = 0;
		vec.usedSize = 0;
	}
}

int main()
{
	Vector myVec;
	std::cout << "Please enter the vector's size: ";
	int size;
	std::cin >> size;
	initVector(myVec, size); //suppose size=3

	//TODO: Fill data from user using pushBackElement
	//...
	Data d;
	initData(d);
	pushBackElement(myVec, d);
	pushBackElement(myVec, 7);
	pushBackElement(myVec, 4);
	pushBackElement(myVec, 15);
	pushBackElement(myVec, 15);
	pushBackElement(myVec, 15);
	pushBackElement(myVec, 15);
	pushBackElement(myVec, 15);

	deleteVector(myVec);


	return 0;
}
