
//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice  

#include<stdio.h>
int main()
{
	int num[100],size,i,j,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n1.Ascending Order Array:= "); 
	printf("\n2.Decending Order Array:= ");
	printf("\nEnter Your Choice:= \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	            for(i=0;i<size;i++)
	            {
		          for(j=i+1;j<size;j++)
		          {
			        if(num[i]>num[j])
			        {
				      int temp = num[i];
				      num[i] = num[j];
				      num[j] = temp;
			        }
		          }
	            }
	            for(i=0;i<size;i++)
	            {
		          printf("%d ",num[i]);
	            }
	    break;
	    case 2:
	    	     for(i=0;i<size;i++)
	            {
		          for(j=i+1;j<size;j++)
		          {
			        if(num[i]<num[j])
			        {
				      int temp = num[i];
				      num[i] = num[j];
				      num[j] = temp;
			        }
		          }
	            }
	            for(i=0;i<size;i++)
	            {
		          printf("%d ",num[i]);
	            }
	    break;
	    default:printf("\n Invalid Input");
    }
} 
