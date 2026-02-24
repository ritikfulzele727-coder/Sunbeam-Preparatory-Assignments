/*
Q8. Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.
*/

#include <stdio.h>

struct Student 
{
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

int main() 
{
    struct Student s;
    
    printf("Enter student name : ");
    scanf("%s", s.studentName);
    
    printf("Enter roll number: ");
    scanf("%s", s.rollNo);
    
    printf("Enter total marks: ");
    scanf("%d", &s.totalMarks);
    
    printf("\nStudent Details:\n");
    printf("Name       : %s\n", s.studentName);
    printf("Roll No    : %s\n", s.rollNo);
    printf("Total Marks: %d\n", s.totalMarks);
    
    return 0;
}