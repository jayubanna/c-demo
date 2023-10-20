#include<stdio.h>
void main()
{
    int p,r,t,Interest;

    printf("enter the  Principal Amount:");
    scanf("%d",&p);
    printf("enter the  Rate per Annum:");
    scanf("%d",&r);
    printf("enter the years:");
    scanf("%d",&t);    

    Interest=p*r*t/100;

    printf("Program to find Simple interest:%d",Interest);

}