
//WAP to find number is even or odd using ternary operator  

#include<stdio.h>
main()
{
	int n;
	char r,e[]={"even"};
	char o[]={"odd"};
	
	printf("Enter any number ");
	scanf("%d",&n);
	
	
	printf("%s",(n%2==0)?e:o);
	
}
