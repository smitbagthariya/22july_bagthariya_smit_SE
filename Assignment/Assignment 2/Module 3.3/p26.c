
//WAP Find out length of string without using inbuilt function 


#include<stdio.h>
main()
{
	char n[10];
	int i;
	printf("Enter string :");
	gets(n);
	do
	{
		i++;
	}
	while(n[i]!='\0');
		printf("string lenght : %d\n",i);
		
}
