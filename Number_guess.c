#include <stdio.h>
#include <stdbool.h>

/*Number guess. You should define a range, e.g. 1 to 1000.
The program should ask user to think of a number.
Then the program should ask the user repeatedly if the number is greater than some X, than Y, etc. until it guesses a number.
 Then it should print the number out.
*/

int main(void){
    int number, guess, tell, l, u, i;
    l = 0;  //lower
    u = 1000;   //upper
    
    printf("Pick a number between 0 and 999\n");
    scanf("%d", &number);   //user's answer
    printf("(Your number: %d)\n", number);
    
    i = 0;  //couting rounds
    while (guess != number){
        guess = (l + u)/2;  //computer's guess
        if (number == guess){
            break;
        }
        printf("Is your number greater than %d? Enter [Y=1/N=0]: ", guess); //computer asks
        scanf("%d", &tell);

        switch(tell){
            case 1:
            {
                l = guess;
                break;
            }
            case 0:
            {
                u = guess;
                break;
            }
        }
        i = i + 1;
    }

    printf("\nAh ha! The answer is : %d\n", guess);
    printf("It takes me %d times to get the answer.\n", i);

    return 0;
}