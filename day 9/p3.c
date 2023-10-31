#include<stdio.h>
int main()
{
    int a=1,n;

    printf("Enter any number:");
    scanf("%d",&n);

    while (n>=1)
    {
        if(n%2!=0)
        printf("%d\t",n);
        n--;
    }
    
    return 0;
}
