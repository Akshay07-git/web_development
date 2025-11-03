// typedef keywrod

#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[50];
    int cgpa;
    int rollno;
}stu;

typedef struct computerengineeringstudent
{
    char name[50];
    int cgpa;
    int rollno;
}coe;

void main()
{
    coe s1;
    stu s2;
    strcpy(s1.name, "akshay");
    s1.cgpa = 9.9;

    printf("Name: %s\n", s1.name);
    printf("CGPA: %d\n", s1.cgpa);

}