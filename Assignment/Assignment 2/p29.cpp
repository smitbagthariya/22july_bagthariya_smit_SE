

//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>
struct empinfo
{
	int empno,age;
	char empname[10],address[10];
}emp[10];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEmpno :");
		scanf("%d",&emp[i].empno);
		printf("\nEmpname :");
		scanf("%s",&emp[i].empname);
		printf("\nage :");
		scanf("%d",&emp[i].age);
		printf("\naddress :");
		scanf("%s",&emp[i].address);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEmpno [%d]=%d",i,emp[i].empno);
		printf("\n\nEmpname [%d]=%s",i,emp[i].empname);
		printf("\n\nage [%d]=%d",i,emp[i].age);
		printf("\n\naddress [%d]=%s",i,emp[i].address);
	}
}  
