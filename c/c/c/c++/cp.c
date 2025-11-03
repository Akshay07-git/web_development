#include<stdio.h>
void hello();
void goodbye();
void greet();

int main()
{
    hello();
    greet();
    goodbye();
    return 0;
}

void hello()
{
    printf("Hello, World!\n");
}
void goodbye()
{
    printf("Goodbye, World!\n");
}

void greet()
{
    printf("Greetings from another function!\n");
}