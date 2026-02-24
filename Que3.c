/*
Q3. Write a program to calculate Fibonacci Series up to n numbers
*/

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}