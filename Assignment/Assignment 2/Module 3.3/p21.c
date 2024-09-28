//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)  

#include<stdio.h>
main()
{
	int a,b;
	char choose;
	printf("Enter a value of A :");
	scanf("%d",&a);
	printf("\nEnter a value of B :");
	scanf("%d",&b);
	printf("\nEnter any operator (+,-,*,/,%%) :");
	scanf(" %c",&choose);
	
	switch(choose)
	{
		case '+':
		printf("\nadd:%d",a+b);
		break;
		
		case '-':
		printf("\nsub:%d",a-b);
		break;
		
		case '*':
		printf("\nmul:%d",a*b);
		break;
		
		case '/':
		printf("\ndiv:%d",a/b);
		break;
		
		default:
		printf("\nError!plz Enter a valid choice");
	}

}
