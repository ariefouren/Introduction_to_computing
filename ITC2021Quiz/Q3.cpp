#include <iostream>

void q3()
{
    /*
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }
    */

    int arr[10] = { -4,-12,-3,-6,-8,-15,-17,-2,-14,-10 };

    //look for the max distance
    int min = arr[0]; //INT_MAX;
    int max = arr[0]; //INT_MIN;

    //find the max and min number
    for (int i = 0; i < 10; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
 
    int result = max - min;
    std::cout << "The max diff is: " << result << std::endl;
}

void q3students(int* arr, int size)
{
	//check which is the largest variable
	int largestnum;
	int smallestnum;
	int difference = 0;
	/*for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr[i]>arr[j]){
				largestnum=arr[i];
			}
		}
	}
	//check which is the smallest variable
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr[i]<arr[j]){
				smallestnum=arr[i];
			}
		}
	}*/
	largestnum = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > largestnum) {
			largestnum = arr[i];
		}
	}
	smallestnum = arr[0];
	for (int t = 0; t < size; t++) {
		if (arr[t] < smallestnum) {
			smallestnum = arr[t];
		}
	}
	//check the difference - maybe there is a negative number
	for (int i = smallestnum; i <= largestnum; i++) {
		difference++;
	}
	std::cout << "The largest difference between the values in the array is:" << difference << std::endl;


}