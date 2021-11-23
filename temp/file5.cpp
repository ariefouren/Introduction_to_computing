#include <iostream>

bool average(int from, int to, array of numbers, double& avg)
{
    //loop over all numbers and make average
    //of all numbers between from and to
    //if there are no numbers that are between from and to,
    //return ????
    if(no numbers){
        return false;
    }
    avg = sum/count;
    return true;
}
int main(){
    double myAvg;
    if(average(5,10,[-1,5,8,34,5,76], myAvg)==true){
        //we can safely use myAvg
    }
    else{
        //we should not use myAvg
    }
}

int main()
{
    swap();

    int x = 5;

    int& rx = x;

    x++;

    std::cout<<rx<<std::endl;  //6

    x++;

    std::cout<<rx<<std::endl;  //7
}