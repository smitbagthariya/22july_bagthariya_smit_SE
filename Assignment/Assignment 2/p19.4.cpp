
//a
//a b
//a b c
//a b c d
//a b c d e

#include<stdio.h>
main()
{
	int n;
	char f;
	printf("Enter any value :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		f='a';
		for(int j=1;j<=i;j++)
		{
			printf("%c ", f);

			f++;
		}
		printf("\n");
	}
	
}
