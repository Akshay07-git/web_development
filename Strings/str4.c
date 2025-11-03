//write a function to count the occurence of vowels in a string

#include<stdio.h>

void vowels(char str[]);

int main()
{
    char str[100];
    printf("enter the string\n");
    fgets(str, 100, stdin);
    vowels(str);
    return 0;
}

void vowels(char str[])
{
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}