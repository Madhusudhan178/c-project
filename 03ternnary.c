#include <stdio.h>
int main()
{
    int a;
    printf("enter the value\n");
    scanf("%d", &a);
    //one liner  not recommended only for short usage
    (a < 5) ? printf("A is less than 5") : printf("a is not less than 5");
    return 0;
}