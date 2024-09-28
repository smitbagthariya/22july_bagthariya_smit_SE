
//WAP to show  

//1. Monday to Sunday using switch case

#include<stdio.h>
main()
{
	int days;
	printf("Enter day number(1-7): ");
	scanf("%d",&days);

	switch(days)
	{
		case 1:
			printf("Monday");
		break;
		
		case 2:
			printf("\nTuesday");
		break;
		
		case 3:
			printf("\nWednesday");
		break;
		
		case 4:
			printf("\nThursday");
		break;
		
		case 5:
			printf("\nFriday");
		break;
		
		case 6:
			printf("\nSaturday");
		break;
		
		case 7:
			printf("\nSunday");
		break;
		
		default:
			printf("\nPlz Enter valid days");
	}
}
