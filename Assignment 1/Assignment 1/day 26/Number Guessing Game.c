#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    printf("Guess the number (1-100): ");

    while(1)
    {
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Correct Guess!");
            break;
        }
        else if(guess < secret)
        {
            printf("Too Small! Try Again: ");
        }
        else
        {
            printf("Too Large! Try Again: ");
        }
    }

    return 0;
}