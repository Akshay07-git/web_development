#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int age;
    char grade;
};

void main()
{
    struct student s = {"Akshay", 21, "A"};
    printf("Name: %s\n", s.name);


    struct student *ptr = &s;
    printf("Age: %d\n", ptr->age);
    printf("Grade: %c\n", ptr->grade);  
    printf("Name via pointer: %s\n", ptr->name);
    printf("Age via pointer: %d\n", (*ptr).age);
}