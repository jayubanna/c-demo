#include <stdio.h>
int main()
{
    int i, j;

    printf("Enter any number:");
    scanf("%d", &j);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", j, i, j * i);
    }

    return 0;
}