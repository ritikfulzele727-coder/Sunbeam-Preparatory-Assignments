/*
Q12. Write a Program to reverse the letters present in the given String. Do
not use strrev() function.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,len;

    printf("Enter string: ");
    scanf("%s",str);

    len = strlen(str);

    printf("Reversed: ");
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}