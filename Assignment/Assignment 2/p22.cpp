
//WAP to find reverse of string using recursion

#include<stdio.h>
main()
{
	char a[10];
	char b[10];
	int i=0,n=0,j=0;
	printf("Enter a your string : ");
	gets(a);
	while(a[i]!='\0')
	{
		i++;
		n++;
	}
	printf("string lenght : %d",i);
	printf("\nNEW: %s",a);
	for(int j=0;j<i;j++)
	{
		b[n]=a[j];
		n--;	
	}
	printf("\nreverse string is : %s",b);
	
}



