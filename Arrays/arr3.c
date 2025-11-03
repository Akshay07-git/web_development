#include<stdio.h>

void fibanocci(int n);

int main()
{
    int n;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("the first %d terms of fibanocci series are\n",n);
    fibanocci(n);
}

void fibanocci(int n)
{
    int fib[n],i;
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\n",fib[0]);
    printf("%d\n",fib[1]);
    for(i = 2;i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\n",fib[i]);
    }
}