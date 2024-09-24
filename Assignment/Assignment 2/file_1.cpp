#include<stdio.h>
main()
{
	FILE *fl;
	int id,n;
	char nm[10],city[10];
	
	fl=fopen("student information.txt","w+");
	
	printf("Enter number of student : ");
	scanf("%d",&n);
	
	for(int i;i<n;i++)
	{
	printf("Enter student ID :");
	scanf("%d",&id);
	
	printf("Enter student NAME :");
	scanf("%s",&nm);
	
	printf("Enter student CITY :");
	scanf("%s",&city);
	
	fprintf(fl,"ID: %d\n",id);
	fprintf(fl,"NAME: %s\n",nm);
	fprintf(fl,"CITY: %s\n",city);
	}	
}
