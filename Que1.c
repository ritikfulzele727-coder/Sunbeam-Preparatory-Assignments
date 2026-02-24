/*
Q1. Write a program to input n numbers on command line argument and
calculate maximum of them.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int max = 0;

    for(int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if(i == 1 || num > max)
            max = num;
    }

    printf("Maximum = %d\n", max);
    return 0;
}