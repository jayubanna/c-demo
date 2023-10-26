#include<stdio.h>
int main()
{
    char choice;

    printf("enter the days name choice=");
    scanf("%c",&choice);

    if(choice=='m'|| choice=='M')
    {
        printf("this is monday..");
    }
    else if(choice=='t'||choice=='T')
    {
      printf("this is tuseday..");
    }
    else if(choice=='w'||choice=='W')
    {
      printf("this is wednesday..");
    }
    else if(choice=='h'||choice=='H')
    {
      printf("this is thursday..");
    }    
    else if(choice=='f'||choice=='F')
    {
      printf("this is friday..");
    }        
    else if(choice=='s'||choice=='S')
    {
      printf("this is saturday..");
    }
    else if(choice=='u'||choice=='U')
    {
      printf("this is sunday..");
    }       
    else{
        printf("wrong input by user **_--_**");
    }            

    return 0;
}