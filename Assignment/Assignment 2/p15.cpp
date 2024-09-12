
//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int n,rem,reverse=0;
	printf("Enter any number ");
	scanf("%d", &n);
	while(n!=0)
	{
	rem=n%10;
	reverse=reverse*10+rem;
	n/=10;
	}
	printf("Reverse number is :%d",reverse);
} 

