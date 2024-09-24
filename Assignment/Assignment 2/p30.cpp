
//WAP to show difference between Structure and Union. 

#include<stdio.h>
struct studinfo
{
	int id;
	char nm[10],sub[10];
}st[10];
main()
{
	int i,n;
	printf("Enter number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nID :");
		scanf("%d",&st[i].id);
		printf("\nNAME :");
		scanf("%s",&st[i].nm);
		printf("\nSUBJECT :");
		scanf("%s",&st[i].sub);
	}
	for(i=0;i<n;i++)
	{
		printf("\nID [%d]=[%d]",i,st[i].id);
		printf("\n\nNAME [%d]=[%s]",i,st[i].nm);
		printf("\n\nSUBJECT[%d]=[%s]",i,st[i].sub);
	}
}
