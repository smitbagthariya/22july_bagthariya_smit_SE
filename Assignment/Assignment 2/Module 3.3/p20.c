
//Write a program to find out the max number from given array using function

#include<stdio.h>
int max()
{
	int a[100],size,i,max;
	printf("\n Enter The Size:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n Enter The Element  :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int result;
	result=max();
	printf("\n Maximum Element Is:%d",result);
	return 0;
}


