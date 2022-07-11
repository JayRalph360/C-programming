#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "Iyan, Product Manager\nNolano, Customer Rep\n");

    fclose(fpointer);

    return 0;
}
