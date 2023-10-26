#include<stdio.h>
int main()
{
    float c,f;

    printf("The temperature in Celcius=");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("The temperature in Fahrenheit:%0.1f",f);
    return 0;
}