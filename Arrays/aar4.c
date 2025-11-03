#include<stdio.h>

void arraytable(int arr[10][10], int m, int n, int num)
{
    int i;
    for(i = 0 ; i < m ; i++)
    {
            arr[m][i] = num * (i + 1);
    }
}

void arraytable2(int arr[10][10], int m, int n, int num)
{
    int i;
    for(i = 1 ; i < m ; i++)
    {
            arr[m][i] = num * (i + 1);
    }
}

int main()
{
    int arr[10][10],m,n,num,num2;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&m,&n);
    printf("Enter the number\n");  
    scanf("%d",&num);
    printf("Enter the second number\n");  
    scanf("%d",&num2);

    arraytable(arr,m,n,num);
    arraytable2(arr,m,n,num2);

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}