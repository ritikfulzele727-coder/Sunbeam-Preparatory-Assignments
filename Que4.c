/*

Q4. Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:

Total Marks >= 90           Grade: Ex 
90 > Total Marks >= 80      Grade: A
80 > Total Marks >= 70      Grade: B
70 > Total Marks >= 60      Grade: C
60 > Total Marks            Grade: F

*/

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;

    printf("Enter 5 marks: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;

    if(total >= 90)
        printf("Grade = Ex");
    else if(total >= 80)
        printf("Grade = A");
    else if(total >= 70)
        printf("Grade = B");
    else if(total >= 60)
        printf("Grade = C");
    else
        printf("Grade = F");

    return 0;
}