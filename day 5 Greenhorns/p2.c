#include<stdio.h>
int main()
{
    int s;
    int hra;
    int da;
    int ta;
    int ji;

    printf("enter to find Base Salary=");
    scanf("%d",&s);
    printf("enter to find HRA=");
    scanf("%d",&hra);
    printf("enter to find da=");
    scanf("%d",&da);
    printf("enter to find ta=");
    scanf("%d",&ta);

    ji=s+s*hra/100+s*da/100+s*ta/100;

    printf("find gross salary by adding=%d",ji);     

    return 0;
}