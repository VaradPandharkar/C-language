#include<stdio.h>
#include<stdlib.h>

int main(){
    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("Memory allocation failed!: \n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter the Price #%d : ", i + 1);
        scanf("%f", &prices[i]);
    }

    for(int i = 0; i < number; i++){
        printf("$%.2f ", prices[i]);
        
    }

    free (prices);
    prices = NULL;




    return 0;
}