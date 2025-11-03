#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a; // pointer p holds the address of variable a
    printf("The value of a is %d\n", a);
    printf("%d\n",*p);
    printf("%d", *(&a));
   
}