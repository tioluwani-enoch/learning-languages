#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void greeting()
{
    printf("How're you doing?? Do you wanna play ROCK PAPER SCISSORS?\n");
}

int printRandom(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

char *attack(int foo)
{
    if (foo == 1)
        return "rock";
    if (foo == 2)
        return "paper";
    if (foo == 3)
        return "scissors";
    return "invalid";
}

char *checkWin(char *userChoice)
{
    int compChoice = printRandom(1, 3);
    printf("Computer chose: %s\n", attack(compChoice));

    if ((strcmp(userChoice, "rock") != 0) || (strcmp(userChoice, "paper") != 0) || (strcmp(userChoice, "scissors")) != 0)
    {
        if (strcmp(userChoice, attack(compChoice)) == 0) // note that 0 in the strcmp means that it is equal too.
            return "That's a draw!";
        else if ((strcmp(userChoice, "rock") == 0 && strcmp(attack(compChoice), "scissors") == 0) ||
                 (strcmp(userChoice, "paper") == 0 && strcmp(attack(compChoice), "rock") == 0) ||
                 (strcmp(userChoice, "scissors") == 0 && strcmp(attack(compChoice), "paper") == 0))
            return "You won!";
        else
            return "You lost!";
    }

    return "Invalid choice!";
}

int main()
{
    srand(time(0)); // Seed the random number generator
    greeting();

    char userChoice[10]; // this basically means that the user can only enter 10 characters

    printf("Enter rock, paper, or scissors: ");
    scanf("%s", userChoice); // takes input from what the user types in the console.

    printf("%s\n", checkWin(userChoice));

    return 0;
}
