#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a value of the first number:");
    scanf("%d",&a);
    printf("Enter a value of the  second  number:");
    scanf("%d",&b);
    printf("Enter a value of the third  number:");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("the first number minimum value:%d",a);
        }
        else{
            printf("the third number minimum value:%d",c);
        }
    }
    else if(b<c)
        {
            printf("the second number minimum value:%d",b);
        }
        else{
            printf("the third number minimum value:%d",c);
        }
    
    return 0;
}