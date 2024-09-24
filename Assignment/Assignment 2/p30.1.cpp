#include<stdio.h>
union studinfo
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
		printf("ID [%d]=[%d]\n",i,st[i].id);
		printf("NAME [%d]=[%s]\n",i,st[i].nm);
		printf("SUBJECT[%d]=[%s]\n",i,st[i].sub);
	}
}
