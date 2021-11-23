#include <iostream>

void printOneLine(int x){
    //print 1 line of num stars
    for(int i=0; i<x; ++i){
        std::cout<<"*";
    }
    std::cout<<std::endl;
}

void printLineWithSpaces(int x)
{
    if(x<=0){
        return;
    }
    std::cout<<"*";
    for(int col=2; col<x; ++col){
        std::cout<<" ";
    }
    std::cout<<"*"<<std::endl;
}

int main()
{
    int num;
    do{
        std::cout<<"please enter a positive number: ";
        std::cin>>num;
    }while(num<=0);
    
    //print 1st line
    printOneLine(num);
    //print lines 2,...,num-1
    for(int row=2; row<=num-1; ++row){
        //print line of * ---- *
        printLineWithSpaces(num);
    }
    printOneLine(num);
}
