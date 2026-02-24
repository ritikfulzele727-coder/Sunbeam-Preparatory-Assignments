/*
Q15. Input a string from the user. Count occurrences (case insensitive) of
each alphabet in the string.
Sample output:
Input: Welcome to SunBeam.
Output:
A : 1
B : 1
C : 1
E : 3
L : 1
M : 2
N : 1
O : 2
S : 1
T : 1
U : 1
W : 1
*/

#include <stdio.h>

int main()
{
    char str[200];
    int count[26]={0}, i;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            count[str[i]-'A']++;

        else if(str[i]>='a' && str[i]<='z')
            count[str[i]-'a']++;
    }

    printf("\nCounts:\n");
    for(i=0;i<26;i++)
    {
        if(count[i]>0)
            printf("%c : %d\n",'A'+i,count[i]);
    }

    return 0;
}



