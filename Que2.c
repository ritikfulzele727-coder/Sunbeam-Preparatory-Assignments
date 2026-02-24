/*
Q2. Write a program to calculate a Factorial of a number.
*/

#include <stdio.h>

int main() 
{
    int n;
    int fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) 
    {
        fact = fact * i;
    }
    
    printf("%d\n", fact);
    
    return 0;
}