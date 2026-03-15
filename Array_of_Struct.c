#include<stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
}car;

int main(){

    car cars[] = {{"BMW", 2023, 32000},
                  {"Ciaz", 2026, 42000},
                  {"City", 2025, 87000}};

    int number = sizeof(cars) / sizeof(cars[0]);

for(int i = 0; i < number; i++){
    printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
}

    
   //car car1 = {"BMW", 2023, 32000};
   //car car2 = {"Ciaz", 2026, 42000};
   //car car3 = {"City", 2025, 87000};
   //printf("%s %d $%d\n", car1.model, car1.year, car1.price);
   //printf("%s %d $%d\n", car2.model, car2.year, car2.price);
   //printf("%s %d $%d\n", car3.model, car3.year, car3.price);


    return 0;
}