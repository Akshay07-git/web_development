#include<stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    return fib(n);
    
}

int fib(int n)
{
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN = fib(n-1) + fib(n-2);
    printf("Calculating fibanocci of %d\n", fibN);
    return fibN;
}