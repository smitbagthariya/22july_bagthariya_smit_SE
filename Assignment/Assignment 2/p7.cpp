
//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)  

#include<stdio.h>
main()
{
	int a,b;
	char n;
	printf("Enter a value of A :");
	scanf("%d",&a);
	printf("\nEnter a value of B :");
	scanf("%d",&b);
	printf("\nEnter any operator (+,-,*,/,%%) :");
	scanf(" %c",&n);
	
	if(n=='+'){
		printf("\nadd= %d",a+b);
	}
	else if(n=='-')
	{
		printf("\nsub= %d",a-b);
	}
	else if(n=='*')
	{
		printf("\nmul= %d",a*b);
	}
	else if(n=='/')
	{
		printf("\ndiv= %d",a/b);
	}
	else
	{
		printf("\nError");
	}
}
