#include <stdio.h>
int main()
{
    int i, j, sum = 0;

    printf("Enter any number:");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)
    {
        sum = sum + i;
    }
    printf("The sum of all numbers:%d", sum);

    return 0;
}