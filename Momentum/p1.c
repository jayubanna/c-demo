#include<stdio.h>
int main()
{
    int num;

    printf("the program if and else \n");
    printf("enter the number=");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("this is even number...");
    }
    else{
        printf("this is odd number...");
    }

    printf("\n\nthe program  ternary operator\n");

    int number;

    printf("enter the number=");
    scanf("%d",&number);

    (number%2!=0)?printf("this is odd number..."): printf("this is even number...");

    return 0;
}