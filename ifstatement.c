#include<stdio.h>
int main(){

    int age = 32;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 65){
    printf("you are a senior citizen");
    }

    else if (age >= 18){
    printf("you are an adult");
    }
    
    else if(age < 0){
        printf("you haven't been born yet");
    }
    
    else if(age == 0){
        printf("you are new born");
    }

    else {
    printf("you are a child");
    }



return 0;

}