/*
Q13. Declare an Array of type char* and initialize it with a few strings (hard-
coded). Display the strings which are duplicated in that array. (Hint: use
strcmp())
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *names[] = {"Rohan","Priya","Amit","Sneha","Rohan","Yash","Priya"};
    int n = sizeof(names)/sizeof(names[0]);
    int i,j;

    printf("Duplicates:\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(names[i],names[j])==0)
            {
                printf("%s\n",names[i]);
                break;
            }
        }
    }

    return 0;
}