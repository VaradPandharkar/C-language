#include<stdio.h>
#include<stdbool.h>
int main()
//{
   // int number = 0;

   // while(number <= 0){
       // printf("Enter number greater than 0: ");
        //scanf("%d",&number);
   // }
//}

{
    bool isRunning = true;
    char Response = '\0';

    while(isRunning){
        printf("YOu are playing a game\n");
        printf("Would you like to continue(Y = YES , N = NO): ");
        scanf(" %c",&Response);


        if(Response != 'Y'){
            isRunning = false;
        }
    }
    printf("you exit the game");

    return 0;
}
