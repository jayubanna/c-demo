#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter a value of the first number:");
    scanf("%d",&a);
    printf("Enter a value of the  second  number:");
    scanf("%d",&b);
    printf("Enter a value of the third  number:");
    scanf("%d",&c);
    printf("Enter a value of the fourth number:");
    scanf("%d",&d);

    if(a>b)
    {
       if(a>c)
         {
           if(a>d)
           {
            printf("The maximum value is:%d",a);
           }
         }
       else{
            printf("The maximum value is:%d",d);
         }
    }

   else if(b>c)
    {
       if(b>d)
           {
            printf("The maximum value is: %d",b);
           }    
       else{
            printf("The maximum value is: %d",d);
         }
    }
    
    else if(c>d)
    {
        printf("The maximum value is:%d",c);
    }
    else{
        printf("The maximum value is:%d",d);
    }
      
    return 0;
}