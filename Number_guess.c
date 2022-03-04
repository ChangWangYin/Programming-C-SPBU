#include <stdio.h>
#include <stdbool.h>

int main(void){
    int number, guess;
    guess = 500;
    bool YN;

    printf("Pick a number between 1 and 1000\n");
    scanf("%d", &number); 
    printf("(Your number: %d)\n", number);
    
    while (number != guess){

        printf("Is your number greater than %d?(If yes, enter 1. If no enter 0.)\n", guess);
        scanf("%d", &YN);
        
        if (YN == 1){
            guess = guess + guess/2;
        }
        else {
            guess = guess - guess/2;
        }

    }
    
    
    return 0;
}