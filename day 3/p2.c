#include<stdio.h>
int main()
{
    int width,height,area;

    printf("enter the width=");
    scanf("%d",&width);
    printf("enter the height=");
    scanf("%d",&height);    

    area=height*width;

    printf("Program to find the area of a rectangle:%d",area);

    return 0;

} 