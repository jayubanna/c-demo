#include<stdio.h>
int main()
{
    int i,j,K=11;
    for (int  i = 1; i<=5; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d ",K);
            K++;
        }
        printf("\n");
    }
    
    return 0;
}