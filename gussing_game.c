#include <stdio.h>
 int main(){

    int random, guess;
    int no_of_guess = 0;

    printf("Welcome to the world of Gussing Numbers \n ");

    // want to run 1 iteration always....so using do while loop
    do{
       printf("\nPlease enter your Guess between(1 to 100): ");
       scanf("%d", &guess);
       no_of_guess++; //this is for how many time u take to guess the write answer

       if(guess < random){
        printf("Guess a larger number.\n");
       }else if(guess > random){
        printf("Guess a smaller number.\n");
       }else{
        printf("Congratulations !!! You have successfully guessed the number in %d attempts",no_of_guess);
       }
    } while (guess != random); 
    // loop will run until guess will not equal to random number  

    printf("Bye Bye!, Thanks for Playing");
    printf("Developed by: Kumari Kirti Jha");
 }