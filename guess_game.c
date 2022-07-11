#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;

    while(guess != secretNumber && outOfGuess == 0){
        if(guessCount < guessLimit){
            printf("Enter a guess: ");
            scanf("%d", &guess);
            guessCount++;
        } else{
            outOfGuess = 1;
        }
    }
    if(outOfGuess == 1){
        printf("Out of guesses.");
    } else{
        printf("You win!");
    }
    printf("You win!");

    return 0;
}
