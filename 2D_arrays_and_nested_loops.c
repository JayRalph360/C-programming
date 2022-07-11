#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2D array.
    int nums[4][2] = {
        {8, 3},
        {5, 7},
        {2, 4},
        {84, 10}
    };
    // Accessing 2D arrays.
    printf("%d\n", nums[3][0]);

    //Nested loops.
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
