// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	char b[10];
	printf("Enter a your string : ");
	gets(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0)
	{
		printf("\nyour string is palindrome");	
	}
	else
	{
		printf("your string is not palindrome");
	}
	
}
