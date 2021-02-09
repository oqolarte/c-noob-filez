#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, guess, secretNumber;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;
    r = rand();
    secretNumber = (r % 20) + 1;
    printf("Guess number from 1 to 20\n");
    
    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
                if(guess < secretNumber){
                    printf("Higher!\n");
                } else if(guess > secretNumber){
                    printf("Lower!\n");
                } else {
                    break;
                }
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }

    if(outOfGuesses == 1){
        printf("Out of guesses!\n");
    } else {
        printf("You guessed right in %d tries!\n", guessCount);
    }
    return 0;
}
