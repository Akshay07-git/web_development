#include<stdio.h>
// reverse an array

void reversearray(int arr[],int n)
{
    int i, firstvalue, secondvalue;
    for(i = 0; i < n/2; i++)
    {
        firstvalue = arr[i];
        secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}

int main()
{
  int n,i,arr[100];
  printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i = 0 ; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    reversearray(arr,n);
    printf("The reversed array is\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}