#include <iostream>

/*
Write a C program to find the largest of three numbers.
Test Data : 12   25   52
Expected Output : 52
*/
int main()
{
    int x, y, z;
    std::cout<<"Please enter three numbers: ";
    std::cin>>x>>y>>z;

    std::cout<<"The largest number is: ";
    if(x > y){
        //y is not relevant anymore.
        //need to decide if max is x or z
        if(x > z){
            std::cout<<x;
        }
        else{
            std::cout<<z;
        }
    }
    else{
        //x is not relevant anymore.
        //need to decide if max is y or z
        if(y > z){
            std::cout<<y;
        }
        else{
            std::cout<<z;
        }
    }
    std::cout<<std::endl;
}