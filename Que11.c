/*
Q11. Create a structure called Employee that includes three fields - a first
name (type String), a last name (type String) and a monthly salary (double).
Write functions to initialize the fields, print them and modify the values in
the given object. Example methods:

    void emp_init(struct emp* e);
    void set_salary(struct emp *e, double sal);
    void emp_display(struct emp *e);

Write the test code in the main(). Create two emp objects and display each
object’s yearly salary. Then give each Employee a 10% raise and display
each Employee’s yearly salary again.
*/

#include <stdio.h>

struct Employee
{
    char firstName[50];
    char lastName[50];
    double salary;
};

// function to input data
void input(struct Employee *e)
{
    printf("Enter first name: ");
    scanf("%s", e->firstName);

    printf("Enter last name: ");
    scanf("%s", e->lastName);

    printf("Enter monthly salary: ");
    scanf("%lf", &e->salary);
}

// function to display data
void display(struct Employee *e)
{
    printf("\nName: %s %s", e->firstName, e->lastName);
    printf("\nMonthly Salary: %.2f", e->salary);
    printf("\nYearly Salary: %.2f\n", e->salary * 12);
}

int main()
{
    struct Employee e1, e2;

    printf("Enter details of Employee 1\n");
    input(&e1);

    printf("\nEnter details of Employee 2\n");
    input(&e2);

    printf("\n--- Before Raise ---\n");
    display(&e1);
    display(&e2);

    // 10% raise
    e1.salary = e1.salary * 1.10;
    e2.salary = e2.salary * 1.10;

    printf("\n--- After 10%% Raise ---\n");
    display(&e1);
    display(&e2);

    return 0;
}