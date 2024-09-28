
//WAP to show difference between Structure and Union. 

#include<stdio.h>
struct studinfo
{
	int id;
	char nm[10],sub[10];
}st[10];
union studinfor
{
	int id;
	char nm[10],sub[10];
}un[10];
main()
{
	int a;
	printf("Enter number of students");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		printf("\nID :");
		scanf("%d",&st[i].id);
		printf("\nNAME :");
		scanf("%s",&st[i].nm);
		printf("\nSUBJECT :");
		scanf("%s",&st[i].sub);
	}
	for(int i=0;i<a;i++)
	{
		printf("ID [%d]=[%d]\n",i,st[i].id);
		printf("NAME [%d]=[%s]\n",i,st[i].nm);
		printf("SUBJECT[%d]=[%s]\n",i,st[i].sub);
	}
	
	int n;
	printf("\nEnter number of students");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nID :");
		scanf("%d",&un[i].id);
		printf("\nNAME :");
		scanf("%s",&un[i].nm);
		printf("\nSUBJECT :");
		scanf("%s",&un[i].sub);
	}
	for(int i=0;i<n;i++)
	{
		printf("ID [%d]=[%d]\n",i,un[i].id);
		printf("NAME [%d]=[%s]\n",i,un[i].nm);
		printf("SUBJECT[%d]=[%s]\n",i,un[i].sub);
	}
}


