//this  is a single player game without any design
//THE game name is SNAKE WATER GUN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int display(char comp, char you)
{
     if (you == comp)
     {
          printf("draw match\n");
     }
     if (comp == 's' && you == 'w')
     {
          return -1;
     }
     else if (comp == 'w' && you == 's')
     {
          return 1;
     }
     else if (comp == 'w' && you == 'g')
     {
          return -1;
     }
     else if (comp == 'g' && you == 'w')
     {
          return 1;
     }
     else if (comp == 'g' && you == 's')
     {
          return -1;
     }
     else if (comp == 's' && you == 'g')
     {
          return 1;
     }
     return 0;
}
int main()
{
     char you, comp;
     srand(time(0));
     int number = rand() % 100 + 1;
     if (number <= 33)
     {
          comp = 's';
     }
     else if (33 < number <= 66)
     {
          comp = 'w';
     }
     else if (number > 66)
     {
          comp = 'g';
     }
     printf("Enter's'for snake and 'w'for water and 'g' for gun\n");
     scanf("%c", &you);
     int result= display(comp, you);
     printf("The comp choosed %c and you choosed %c \n ", comp, you);
     if(result==0){
          printf("Game drawn!\n");
     }
     else if(result==1){
          printf("You WIN!!!\n");
     }
     else{
          printf("You lose\n");
     }
     
     return 0;
}
