 // create a structure to store the complex numbers using arrow operator
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

 struct complex {
    int real;
    int img;
 };

 int main()
 {
    struct complex number1 = {9,3};
    struct complex *ptr = &number1;
    printf("the real  number is %d",ptr->real );
    printf("the imaginar number is %d",ptr->img);
 }