/*
Q10. Read at most 10 names of students and store them into an array of
char nameOfStudents[10][50]. Sort the array and display them back. Hint:
Use qsort() method.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return strcmp((char *)a, (char *)b);
}

int main() 
{
    char nameOfStudents[10][50];
    int n, i;

    printf("How many students (max 10)? ");
    scanf("%d", &n);
    
    if (n > 10) 
        n = 10;
    if (n < 1)  
        n = 1;

    printf("Enter %d student names (no spaces):\n", n);
    
    for (i = 0; i < n; i++) 
    {
        scanf("%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compare);

    printf("\nSorted list of names:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d. %s\n", i + 1, nameOfStudents[i]);
    }

    return 0;
}   