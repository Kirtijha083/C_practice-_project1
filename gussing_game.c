#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Gussing Numbers \n ");
    random = rand() % 100 + 1;
    // printf("number is: %d", random);
    // rand generate number b/w 0_100 in decimal...so multiply by 100 so then the number is between 0_99 so, we +1 in it
    // want to run 1 iteration always....so using do while loop
    do
    {
        printf("\nPlease enter your Guess between(1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++; // this is for how many time u take to guess the write answer

        if (guess < random)
        {
            printf("Guess a larger number.\n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller number.\n");
        }
        else
        {
            printf("Congratulations !!! You have successfully guessed the number in %d attempts", no_of_guess);
        }
    } while (guess != random);
    // loop will run until guess will not equal to random number

    printf("Bye Bye!, Thanks for Playing\n");
    printf("Developed by: Kumari Kirti Jha");
}

// #include <stdlib.h> → Provides the `rand()` function, which generates random numbers.
// #include <time.h> ka use hum time() function ko access karne ke liye karte hain, jo system ka current time (seconds me) return karta hai..
//  By default, rand() function har baar ek hi sequence ke random numbers generate karta hai. Isko har execution me alag-alag numbers generate karane ke liye hum srand(time(NULL)) ka use karte hain.
// time(NULL): System ka current time (seconds me) deta hai.
// srand(time(NULL)): Is time ko seed bana kar rand() function ko initialize karta hai, taki har execution me naye random numbers milein.