#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int a,b,result;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    result = sum(a,b);
    printf("the sum of a and b is %d\n",result);
}
