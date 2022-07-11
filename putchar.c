#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet, from A to Z.
 *
 * return 0
 */

int main()
{
    int i;

    i = 65;

    while (i < 91)
    {
        putchar(i);
        i++;
    }

    return 0;
}
