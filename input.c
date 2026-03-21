#include<stdio.h>

int main ()
{
   int age = 0;
   float gpa = 0.0f;
   char grade = '\0';
   char name [30] = "";

   printf("enter the age");
   scanf("%d",&age);

   printf("enter the gpa");
   scanf("%f",&gpa);

   printf("enter the grade");
   scanf(" %c",&grade);

   getchar();

   printf("enter your name");
   fgets(name,sizeof(name),stdin);

 

   printf("%d\n",age);
   printf("%f\n",gpa);
   printf("%c\n",grade);
   printf("%s\n",name);

   return 0; 


}