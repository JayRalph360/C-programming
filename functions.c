#include <stdio.h>
#include <stdlib.h>

int main()
{
    greet("Ralph", 20);
    greet("Jay", 18);
    greet("Nex", 24);

    return 0;
}

void greet(char name[], int age)
{
    printf("Hello, %s. How do you do! Are you %d.\n", name, age);
}
