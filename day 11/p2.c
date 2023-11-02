#include <stdio.h>
int main()
{
    int i, j, fact=1;

    printf("Enter any number:");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)
    {
        fact = fact * i;
    }
    printf("The sum of all numbers:%d",fact);

    return 0;
}