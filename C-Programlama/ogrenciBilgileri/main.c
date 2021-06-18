#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Student_
{
    int birthYear;
    char name[20];
    char surname[20];
    double GPA;
}Student;

void printStudent(Student st1)
{
    printf("Name : %s\nSurname: %s\nBirth Year: %d\nGPA : %lf\n",st1.name,st1.surname,st1.birthYear,st1.GPA);
}

int main()
{
    
    Student st1;

    strcpy(st1.name, "Ali");
    strcpy(st1.surname, "Aslan");
    st1.birthYear = 2000;
    st1.GPA = 2.46;
    printStudent(st1);


    return 0;
}