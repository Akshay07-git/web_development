#include<stdio.h>

int printtable(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}

int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printtable(n);
    
    return 0;
}
