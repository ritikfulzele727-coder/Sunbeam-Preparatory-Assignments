/*
Q5. Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.
*/

#include <stdio.h>

int main() 
{
    char ch;
    int upper = 0, lower = 0, digit = 0, other = 0;
    
    printf("Enter characters (press # to stop):\n");
    
    while(1) 
    {
        scanf("%c", &ch);
        if(ch == '#') 
            break;
        
        if(ch >= 'A' && ch <= 'Z') 
            upper++;
        else if(ch >= 'a' && ch <= 'z') 
            lower++;
        else if(ch >= '0' && ch <= '9') 
            digit++;
        else 
            other++;
    }
    
    printf("\nUppercase letters  : %d\n", upper);
    printf("Lowercase letters  : %d\n", lower);
    printf("Digits             : %d\n", digit);
    printf("Other characters   : %d\n", other);
    
    return 0;
}