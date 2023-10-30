#include<stdio.h>
int main()
{

    int unit;
    float ji,jj,bill;
    

    printf("Enter electricity units=");
    scanf("%d",&unit);

    if(unit<=50)
    {
          ji=unit*0.50;
    }
    else if(unit>50 && unit<=150)
    {
       ji=unit*0.75;
    }
    else if(unit>150 && unit<=250)
    {
      ji=unit*1.20;
    }
    else
    {
      ji=unit*1.50;
    }
    

    
    jj=ji*0.20;
    bill=ji+jj;   

    printf("Electricity Bill=%0.2f",bill);  

    return 0;
}