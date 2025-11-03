#include<stdio.h>

int countstring(char str[]);
void printstring(char str[]);

int main()
{
    char str[100];
    fgets(str,100,stdin);
    printf("the length of the string is %d\n",countstring(str));
}

int countstring(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count-1; // to exclude the newline character
}

void printstring(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
}