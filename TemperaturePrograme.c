#include<stdio.h>
int main()
{
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Programe\n");
    printf("C. celsius to fahrenheit\n");
     printf("F. fahrenheit to celsius\n");
     printf("IS the temperature in celsius (C) or fahrenheit (F)?: ");

     scanf("%c",&choice);

     if(choice == 'C'){
        printf("Enter the Tempearture in celsius: ");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f celsius is equal to %.1f fahrenheit\n", celsius , fahrenheit);

     }
     else if(choice == 'F'){
        printf("Enter the Tempearture in fahrenheit: ");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit , celsius); 
     }
     else{
        printf("Inavlid Choice ! please select C or F\n");
     }


return 0;

}

//Temperature Conversion Programe
//C. celsius to fahrenheit
//F. fahrenheit to celsius
//IS the temperature in celsius (C) or fahrenheit (F)?: C
//Enter the Tempearture in celsius: 32
//32.0 celsius is equal to 89.6 fahrenheit



//Temperature Conversion Programe
//C. celsius to fahrenheit
//F. fahrenheit to celsius
//IS the temperature in celsius (C) or fahrenheit (F)?: F
//Enter the Tempearture in fahrenheit: 89.6
//89.6 fahrenheit is equal to 32.0 celsius