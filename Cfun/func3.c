#include<stdio.h>

void percentage(int maths,int science,int sanskrit);

int main()
{
    int maths, science, sanskrit;
    printf("Enter the makarks in three subjects\n");
    printf("marks in maths: ");
    scanf("%d", &maths);
    printf("marks in science: ");
    scanf("%d", &science);  
    printf("marks in sanskrit: ");
    scanf("%d", &sanskrit);
    percentage(maths, science, sanskrit);
    return 0;
}

void percentage(int maths, int science, int sanskrit)
{
    int total;
    total = maths + science + sanskrit;
    float percent;
    percent = (total / 300.0) * 100;
    printf("total is : %d\n", total);
    printf("percentage is %f\n", percent);
}