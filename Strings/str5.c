// check whether the charcter present int he string or not

#include<stdio.h>

void checkstring(char str[],char ch);

int main()
{
    char str[100];
    printf("enter the string\n");
    fgets(str,100,stdin);
    printf("enter the character to be searched\n");
    char ch;
    scanf(" %c",&ch);
    checkstring(str, ch);
    return 0;
}

void checkstring(char str[],char ch)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("the character %c is present in the string\n", ch);
            return;
        }
    }
    printf("the character %c is not present in the string\n", ch);
}