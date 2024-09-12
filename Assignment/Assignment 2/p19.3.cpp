
//A
//B C
//D E F
//G H I J
//K L M N O


#include<stdio.h>
main()
{
	char f='A';
	int n;
	printf("Enter any value :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ", f);
			f++;
		}
		printf("\n");
	}
	
}
