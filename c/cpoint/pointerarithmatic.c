#include<stdio.h>

void main()
{
    int age = 22;
    int *ptr = &age;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of age is %u\n", ptr);
}
    