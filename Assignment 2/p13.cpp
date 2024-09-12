
//WAP to print factorial of given number  

#include<stdio.h>
main()
{
	int i,f = 1,num;
	printf("Enter any number :");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
		f = f * i;
		
		
		printf("The factorial of %d : %d", num, f);
	
}

