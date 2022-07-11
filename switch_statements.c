#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';

    switch(grade){
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did okay!");
        break;
    case 'D':
        printf("You did poor!");
        break;
    case 'E':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You falied!");
        break;
    default:
        printf("Invalid Grade");
    }

    return 0;
}
