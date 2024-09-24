// Write a program of structure employee that provides the following information - print and display empno, empname, address and age

#include <stdio.h>
struct employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
} emp;

main() 
{
    printf("Enter Employee No: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp.empname); 
    printf("Enter Address: ");
    scanf("%s", emp.address); 
    printf("Enter Age: ");
    scanf("%d", &emp.age);

    
    printf("Employee Information:\n");
    printf("Employee No: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);


}  

