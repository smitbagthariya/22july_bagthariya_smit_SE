
//WAP to take 10 no. Input from user and find out …   
//1. How many Even numbers are there  
//2 How many odd numbers are there  
//3. Sum of even numbers   
//4. Sum of odd numbers


#include<stdio.h>
main()
{
	int a,b,odd=0,even=0,n[10];
	
	for(int i=0;i<10;i++)
	{
		printf("\nEnter number %d :", i);
		scanf("%d", &n[i]);
	}
	for(int i=0;i<10;i++)
	{
	
		if(n[i]%2==0)
		{
			even++;
			
			a+=n[i];
			
		}	
		else 
		{
			odd++;
			
			b+=n[i];	
			
		}
	}	
		printf("\nTotal number of even %d ", even);
		printf("\nTotal sum of even %d ", a);
		printf("\nTotal number of odd %d ", odd);
		printf("\nTotal sum of odd %d ", b);
}



