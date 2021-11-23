#include <iostream>
using namespace std;

void q2()
{
	int num;
	std::cout << "Please enter a number (0-9): ";
	std::cin >> num;
	//check validation of num

	for (int i = 1; i <= num; ++i) {
		for (int j = i; j < num+i; ++j) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
	std::cout<<std::endl;
}


void PrintMatrix(int N)
{
//	if (N < 0 || N>9) {
//		return 0;
//
//	}

	int i, j, arr[9];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			arr[j] = j + 1 + i;
			cout << arr[j] << " ";
		}
		cout << endl;
	}
}

void q2Students()
{
	PrintMatrix(6);
}
