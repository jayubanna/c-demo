#include<stdio.h>
int main()
{
    int i=1,j;

    printf("Enter any number:");
    scanf("%d",&j);

    do{
       if(i%2==0)
       printf("%d",i);
       i++;
    }while(i<=j);
    
    return 0;
}