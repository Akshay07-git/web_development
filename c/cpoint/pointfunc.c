#include<stdio.h>

void printarray(int arr[], int n);

int main()
{
    int arr[]= {1,2,3,4,5};
    printarray(arr,5);
    return 0;
}

void printarray(int arr[],int n)
{
    int i;
    printf("the elements of array are\n");
    for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}