#include <iostream>

struct Date{ //
    int day;
    int month;
    int year;
};

int main()
{
    Date d1; //

    Date d2 = {3,1,2022};
    
    char s[] = "hello";
    int arr[] = {1,2,3,4,5};

    d1.day = 14;
    d1.month = 12;
    d1.year = 2021;

    std::cout<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<std::endl;
    std::cout<<d2.day<<"/"<<d2.month<<"/"<<d2.year<<std::endl;
}