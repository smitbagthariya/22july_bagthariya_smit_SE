// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
main()
{
	char str1[10];
	char str2[10];
	printf("Enter a your string : ");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str1,str2)==0)
	{
		printf("\nyour string is palindrome");	
	}
	else
	{
		printf("your string is not palindrome");
	}
	
}
