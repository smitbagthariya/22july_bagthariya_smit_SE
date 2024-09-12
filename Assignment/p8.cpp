
//WAP to swap two numbers without using third variable 

#include<stdio.h>
main()
{
	int k,s;
	printf("Enter number of A :",k);
	scanf("%d",&k);
	printf("Enter number of B :",s);
	scanf("%d",s);
	
	k=k+s;//20+30=50;
	s=k-s;//50-30=20;
	k=k-s;//50-20=30;
	
	printf("swapping number of A :%d",k);
	printf("\nswapping number of B :%d",s);
}
