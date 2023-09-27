#include <stdio.h>

int main()
{
    int secret_number, guess, attemps = 0;
    srand(time(NULL));
    secret_number = rand() % 100 + 1;

    do
    {
        printf("Guess the number (1 - 100): ");
        scanf("%i",&guess);
        attemps++;

        if (guess < secret_number)
        {
            printf("To low. Try again\n");
        }
        else if (guess > secret_number)
        {
            printf("To high. Try again\n");
        }
        else{
            printf("Congratulations! Yes guessted it in %i attemp(s)\n\n",attemps);
        }
        
    } while (guess != secret_number);
    
}