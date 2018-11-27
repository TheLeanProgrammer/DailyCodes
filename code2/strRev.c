/*
 *Author: Aayush Bisen
 *GitHub: https://github.com/aayushbisen
 */


#include<stdio.h>
#define MAX 100

void strRev( char str[MAX] );

int main(void)
{
    char string[MAX];

    printf("Enter the string: ");
    gets(string);
    strRev(string);
    return 0;
}


void strRev( char str[MAX] )
{
    int i;
    int j;
    char temp;

    for(i=0 ; str[i]!='\0' ; i++);

    j=0;
    i = i-1;

    while(j<i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }

    printf("The reversed string is %s", str);
}
