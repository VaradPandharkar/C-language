#include<stdio.h>

void HappyBirthday(char name[], int age){
    printf("\nHappy Birthday to you!");
     printf("\nHappy Birthday to you!");
      printf("\nHappy Birthday dear %s!",name);
       printf("\nHappy Birthday to you!");
        printf("\nYou are %d year old!\n",age);
    
}
int main(){

    char name[] = "Varad";
    int age = 18;

          HappyBirthday(name, age);

        return 0;

}