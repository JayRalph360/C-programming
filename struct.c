#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    char major[20];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    strcpy(student1.name, "Raph");
    strcpy(student1.major, "Computer Science");
    student1.age = 20;
    student1.gpa = 4.0;

    struct Student student2;
    strcpy(student2.name, "Jay");
    strcpy(student2.major, "Medicine");
    student2.age = 24;
    student2.gpa = 4.0;

    printf("%f\n", student1.gpa);
    printf("%d", student2.age);

    return 0;
}
