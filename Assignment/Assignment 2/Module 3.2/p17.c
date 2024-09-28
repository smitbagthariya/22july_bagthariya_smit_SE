
// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>  
main()    
{    
	int n,sum=0,ans;    
	printf("Enter a number:");    
	scanf("%d",&n);    
	while(n>0)    
	{    
		ans=n%10;    
		sum=sum+ans;    
		n=n/10;    
	}    
		printf("Sum is = %d",sum);    
  
}   
