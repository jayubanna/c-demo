#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;

    printf("Enter a value of the first number:");
    scanf("%d",&a);
    printf("Enter a value of the  second  number:");
    scanf("%d",&b);
    printf("Enter a value of the third  number:");
    scanf("%d",&c);
    printf("Enter a value of the fourth number:");
    scanf("%d",&d);
    printf("Enter a value of the five number:");
    scanf("%d",&e);
    printf("Enter a value of the six number:");
    scanf("%d",&f);  

    if(a>b)
    {
        if(a>c)
        {
           if(a>d)
           {
            if(a>e)
            {
                if(a>f)
                {
                    printf("The maximum value is:%d",a);
                }
                else{
                    printf("The maximum value is:%d",f);
                }
            }
           }   
        }
    }  

    else if(b>c)
    {
        if(b>d)
        {
           if(b>e)
           {
            if(b>f)
                {
                    printf("The maximum value is:%d",b);
                }
                else
                {
                    printf("The maximum value is:%d",f);
                }
           }   
        }
    }  

    else if(c>d)
    {
        if(c>e)
        {
           if(c>f)
                {
                    printf("The maximum value is:%d",c);
                }
                else{
                    printf("The maximum value is:%d",f);
                }
           
        }
    }  

    else if(d>e)
    {
        if(d>f)
                {
                    printf("The maximum value is:%d",d);
                }
                else{
                    printf("The maximum value is:%d",f);
                }         
    }  
    else if(e>f)
    {
      printf("The maximum value is:%d",e);
    }
    else{
      printf("The maximum value is:%d",f);
    }    


    return 0;
}