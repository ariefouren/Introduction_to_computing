#include <iostream>

int main6()
{
	int numOfLines;
	std::cout << "Enter number of lines for the triangle: ";
	std::cin >> numOfLines;

	// Variable initialization 
	int line_no = 1; // Line count 

	// Loop to print desired pattern 
	int curr_star = 0;
	for (int line_no = 1; line_no <= numOfLines; )
	{
		// If current star count is less than 
		// current line number 
		if (curr_star < line_no)
		{
			std::cout << "* ";
			curr_star++;
			continue;
		}

		// Else time to print a new line 
		if (curr_star == line_no)
		{
			std::cout << "\n";
			line_no++;
			curr_star = 0;
		}
	}
	return 0;
}