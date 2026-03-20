#include<stdio.h>
#include<stdbool.h>

void Hello (char name[],int age); // function Prototype
bool agecheck(int age);  // function prototype

int main(){
    Hello("VARAD",18);
    if(agecheck(35)){
        printf("you are old enough to work at the IBM");
    }
    else{
        printf("you must be 16+ to work at the IBM");
    }
    return 0;
}

void Hello (char name[],int age){
    printf("Hello %s\n",name);
    printf("You are %d year old\n", age);

}

bool agecheck(int age){
    return age >=16;
}