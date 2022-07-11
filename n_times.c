#include <stdio.h>
#include <stdlib.h>

/**
 * print_something - prints n times table, starting from 0 to n.
 *
 * return 0
 */
int print_something(int num)
{
    int i, j;
    for (i = 0; i < num + 1; i++)
    {
        for (j = 0; j < num + 1; j++)
        {
            printf("%d", i * j);
            if (j < num)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    return (0);
}

/**
 * main - calls print_something().
 *
 * return 0
 */
int main()
{
    print_something(5);

    return 0;
}
