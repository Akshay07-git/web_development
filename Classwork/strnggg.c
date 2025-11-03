// comparing the string

#include<stdio.h>

int compareStrings(char s1[], char s2[]);

int main(void)
{
    char s1[100], s2[100];
    int diff;

    printf("enter the 2 strings\n");
    scanf("%s%s",s1,s2);

    diff = compareStrings(s1, s2);

    if(diff == 0)
    {
        printf("the strings are equal\n");
    }
    else if(diff > 0)
    {
        printf("string 1 is greater than string 2\n");
    }
    else
    {
        printf("string 2 is greater than string 1\n");
    }

    return 0;
}

int compareStrings(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
}