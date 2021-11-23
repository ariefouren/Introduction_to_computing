#include <iostream>

int main()
{
    int N;

    /* Input number of rows from user */
    std::cout << "Enter number of rows: ";
    std::cin >> N;

    /* Iterate over each row */
    for(int i=1; i<=N; i++) {
        /* Iterate over each column */
        for(int j=1; j<=N; j++){
            if(i==1 || i==N || j==1 || j==N) {
                /* Print star for 1st, Nth row and column */
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
        }

        /* Move to the next line/row */
        std::cout << std::endl;
    }

    return 0;
}