
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
#include<stdio.h>
main()
{
	int n;
	printf("Enter any value :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
				
				if(j%2)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			
		
		}
		printf("\n");
	}
	
}
