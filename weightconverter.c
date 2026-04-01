#include<stdio.h>
int main()
{
    int choice = 0;
    float pounds = 0.0f;
    float kilogram = 0.0f;

    printf("Weight conversion calculator\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("Enter your choice (1 or 2 ): ");
    scanf("%d", &choice);

    if(choice == 1){
        // kilogram to pounds
        printf("Enter the Weight in Kilogram: ");
        scanf("%f", &kilogram);
        pounds = kilogram * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds \n" , kilogram, pounds);
        
    }

    else if (choice == 2){
        // pounds to kilogram 
        printf("Enter the Weight in Pounds: ");
        scanf("%f", &pounds);
        kilogram = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms \n" , pounds , kilogram);
         
    }

    else{
        printf("Invalid choice ! Please Enter 1 or 2\n");
    }

    return 0;

}



//Weight conversion calculator
//1. kilograms to pounds
//2. pounds to kilograms
//nter your choice (1 or 2 ): 1
//Enter the Weight in Kilogram: 74.10
//74.10 kilograms is equal to 163.36 pounds


//Weight conversion calculator
//1. kilograms to pounds
//2. pounds to kilograms
//Enter your choice (1 or 2 ): 2
//Enter the Weight in Pounds: 163.36
//163.36 pounds is equal to 74.10 kilograms 


//Weight conversion calculator
//1. kilograms to pounds
//2. pounds to kilograms
///Enter your choice (1 or 2 ): 4
//Invalid choice ! Please Enter 1 or 2

