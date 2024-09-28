
//WAP to find simple interest 
 
#include<stdio.h>
main()
{
	float p,r,t;
	float SI;
	
	printf("Enter a value of Principal :",p);
	scanf("%f",&p);
	
	printf("\nEnter a value of Rate :",r);
	scanf("%f",&r);
	
	printf("\nEnter a value of Time :",t);
	scanf("%f",&t);
	
	SI=(p * r * t)/100;
	printf("\nThe simple interest is :%f",SI);
	
}
