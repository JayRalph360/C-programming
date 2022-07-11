#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Ralph";
    int age = 20;
    double gpa = 4.0;
    char grade = 'A';

    printf("name: %p\nage: %p\ngpa: %p\ngrade: %p", &name, &age, &gpa, &grade);

    return 0;
}
