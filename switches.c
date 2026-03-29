#include<stdio.h>
int main()
{
    int daysofWeek = 0;

    printf("Enter the day of week (1-7): ");
    scanf("%d",&daysofWeek);

    switch(daysofWeek){
    case 1:
        printf("It is Monday");
        break;

    case 2:
        printf("It is tuesday");
        break;

     case 3:
        printf("It is wednesday");
        break;

    case 4:
        printf("It is thrusday");
        break;

    case 5:
        printf("It is friday");
        break;

     case 6:
        printf("It is saturday");
        break;

    case 7:
        printf("It is sunday");
        break;
        default:
        printf("Enter only no from (1 to 7)");


    }
}

//Enter the day of week (1-7): 3
//It is wednesday.
