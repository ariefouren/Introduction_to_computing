#include <iostream>

struct Date{
    int day;
    int month;
    int year;
};

struct StudentData
{
    char name[100];
    char faculty[100];
    double average;
    int id;
    int grades[100];
    Date birthDate;
};

int getStudentWithHighestAverage(StudentData students[], int n)
{
    int indexOfMax = 0;
    double maxAvg = 0;

    for(int i=0; i<n; ++i){
        if(students[i].average > maxAvg){
            indexOfMax = i;
            maxAvg = students[i].average;
        }
    }

    return indexOfMax;
}

int main()
{
    StudentData s = {"miri", "cs", 100, 123456, {50,22,34,56}};

    StudentData students[50];
  
}