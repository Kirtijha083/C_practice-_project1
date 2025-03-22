#include <stdio.h>
 int main(){

    int random, guess;

    printf("Welcome to the world of Gussing Numbers \n ");

    // want to run 1 iteration always....so using do while loop
    do{
       printf("\nPlease enter your Guess between(1 to 100): ");
       scanf("%d", &guess);

       if(guess < random){
        printf("Guess a larger number.\n");
       }else if(guess > random){
        printf("Guess a smaller number.\n");
       }else{
        printf("Congratulations !!! You have successfully guessed the number.\n");
       }
    } while (guess != random); 
    // loop will run until guess will not equal to random number  
 }