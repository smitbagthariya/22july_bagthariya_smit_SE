
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


#include<stdio.h>
main()
{
	int n,f=1;
	printf("Enter any value :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ", f);
			f++;
		}
		printf("\n");
	}
	
}
