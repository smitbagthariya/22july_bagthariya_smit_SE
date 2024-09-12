
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *


#include<stdio.h>
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i=0; i < 5; i++) 
	{
        for (int j = 0; j < 4 - i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
}
