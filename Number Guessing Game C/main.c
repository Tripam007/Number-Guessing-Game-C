#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number from 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int n, c = 0;
    while (1)
    {

        for (int i = 0;; i++) // changed to infinite loop using for
        {
            printf("Guess the no.: ");
            scanf("%d", &n);
            c++;
            if (n > randomNumber)
            {
                printf("Lower no.\n"); // fixed hint
            }
            else if (n < randomNumber)
            {
                printf("Higher no.\n"); // fixed hint
            }
            else
            {
                printf("Congrats u have guessed the correct no.!!\n");
                break;
            }
        }
        printf("You have guessed the correct no. %d in %d attempts\n", n, c);
    }
    return 0;
}
