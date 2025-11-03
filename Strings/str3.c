// write a function nammed slice,which takes a string & returned a sliced string from index n to m

#include<stdio.h>

void slice(char str[],int n,int m);

int main()
{
    char str[100];
    printf("enter the string\n");
    scanf("%s",str);
    int m,n;
    printf("enter the starting and ending index\n");
    scanf("%d%d",&n,&m);
    slice(str,n,m);
    return 0;
}

void slice(char str[], int n, int m)
{
    int i, j = 0;
    char newstr[100];
    for(i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    printf("the sliced string is %s\n",newstr);
}