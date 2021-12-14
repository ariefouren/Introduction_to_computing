#include <iostream>
#include <string.h>

#define NUM_COLUMNS 4

double getSumOfRow(int line[], int n){
    double sum = 0;
    for(int j=0; j<n; ++j){
        sum += line[j];
    }
    return sum;
}

double calcAverage(int mat[][NUM_COLUMNS], int rows, int cols){
    double sum = 0;
    for(int i=0; i<rows; ++i){
        sum += getSumOfRow(mat[i],cols);
    }
    return sum/(rows*cols);
}
int main()
{
    int matrix[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    std::cout<<calcAverage(matrix,3,4)<<std::endl;
}
