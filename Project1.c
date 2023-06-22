#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, ngusses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // genrate the number between 1to 100
    // printf("The number is %d\n", number);
    // keep running the loop until the number is generated
    do
    {
        printf("Guees the number between 1 to 100:\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("LOWER number please !\n");
        }
        else if (guess < number)
        {
            printf("HIGHER number please !\n");
        }
        else
        {
            printf("You gussesed it in %d attempts: \n", ngusses);
        }
        ngusses++;
    } while (guess != number);

    return 0;
}