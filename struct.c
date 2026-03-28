#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    char name [50];
    int age;
    float gpa;
    bool isFullstudent;
}Student;

void printStudent (Student student);

int main(){

    Student student1 = {"Varad", 18, 8.1, true};
    Student student2 = {"Pratham", 18, 7.5, true};
    Student student3 = {"Yug", 18, 8.0, true};
    Student student4 = {"Yadnesh", 18, 8.2, true};

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);


    return 0;
}

void printStudent (Student student){

    printf("%s\n",student.name);
    printf("%d\n",student.age);
    printf("%.2f\n",student.gpa);
    printf("%s\n", (student.isFullstudent) ? "Yes" : "No");
    printf("\n");
}