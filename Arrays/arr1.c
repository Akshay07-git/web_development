#include<stdio.h>

int main()
{
    float price[3];
    printf("enter the price of 3 items\n");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);
    printf("the price of 3 items with GST is %f %f %f\n",
        price[0] + (0.18 * price[0]),
        price[1] + (0.18 * price[1]),
        price[2] + (0.18 * price[2])
    );
    return 0;
}