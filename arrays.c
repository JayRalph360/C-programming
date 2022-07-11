#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 9, 7, 2, 5};
    luckyNumbers[0] = 12;

    printf("%d", luckyNumbers[2]);

    return 0;
}
