#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

int great(int x, int y, int z){
    int answer;

    if(x >= y && x >= z){
        answer = x;
    } else if(y >= x && y >= z){
        answer = y;
    } else {
        answer = z;
    }
}

int main()
{
    printf("%d\n", max(15, 9));
    printf("%d\n\n", great(8, 3, 42));

    if(3 > 12 || 5 < 1){
        printf("True\n");
    } else {
        printf("False\n");
    }

    if(!(3 > 5)){
        printf("True");
    }

    return 0;
}
