#include<stdio.h>
int main()
{
    int opt;
   
    printf("Press 1 for English\n");
    printf("Press 2 for hindi\n");
    printf("Press 3 for  Gujarati\n");

    printf("Enter your choice:");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");

    printf("Enter your choice:");
    scanf("%d",&opt);

    printf("You have successfully done Top-up Recharge.");
    break;

    case 2:
    printf("Internet Recharge ke liye 1 dabaiye\n");
    printf("Top-up Recharge ke liye 2 dabaiye\n");
    printf("Special Recharge ke liye 3 dabaiye\n");

    printf("Enter your choice:");
    scanf("%d",&opt);

    printf("Aapne safaltapurvak Internet Recharge kar liya he.");
    break;

    case 3:
    printf("Internet Recharge mate 1 dabavo\n");
    printf("Top-up Recharge mate 2 dabavo\n");
    printf("Special Recharge mate 3 dabavo\n");

    
    printf("Enter your choice:");
    scanf("%d",&opt);
    
    printf("Tame safaltapurvak Special Recharge karyu chhe.");
    break;

    default:
    printf("wrong input**-_-**");
    }
    return 0;
}