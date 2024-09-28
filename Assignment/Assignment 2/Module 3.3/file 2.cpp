#include<stdio.h>
main()
{
	FILE *fl;
	char f[100];
	
	fl=fopen("student information.txt", "r");
	
	while(fgets(f,100,fl))
	{
		printf("%s", f);
	}
	printf("\n");
}
