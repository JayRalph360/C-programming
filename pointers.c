#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20;
    int * pAge = &age;
    double gpa = 4.0;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age: %p\n", &age);

    return 0;
}
