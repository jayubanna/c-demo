#include<stdio.h>
int main()
{
    int i,j,ji,f=0,ff=1;

    printf("Enter any number:");
    scanf("%d",&j);

    printf("%d%d",f,ff);
   
     for(i=2;i<=j;i++)
     {
        ji=f+ff;
        f=ff;
        ff=ji;
        printf("%d",ji);
     }

    
    return 0;
}