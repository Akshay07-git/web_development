#include<stdio.h>

int main()
{
    int aadhar[5];
    int *ptr = &aadhar[0];
    int i;

    printf("enter the elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d", &ptr+i);
    }
    printf("the elements of array are\n");
    for(i=0;i<5;i++){
        printf("%d\n", aadhar[i]);
    }
}