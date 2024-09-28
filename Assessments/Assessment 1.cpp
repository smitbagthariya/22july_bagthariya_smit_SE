// Assissement 1


#include<stdio.h>
main()
{
	int choice,qty,Totalamount=0,amount;
	char ans,y,n;
	
	 do
	 {
		printf("\n\t\t welcome to Food point\n\n");
		printf("item\t\t Prize");
		printf("\n1.Pizza\t\t 100");
		printf("\n2.Dosa\t\t 130");
		printf("\n3.Idli\t\t 50");
		printf("\n4.Burger\t 50");
	
		printf("\n\nplease Enter your choice: ",choice);
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nYou have selected Pizza");
				printf("\n\nEnter the quentity: ");
				scanf("%d",&qty);
				amount=qty*100;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 2:
				printf("\nYou have selected Dosa");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*130;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 3:
				printf("\n\nYou have selected Idli");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*50;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 4:
				printf("\nYou have selected Burger");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*50;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			default:
			printf("\nPlz Enter valid choice");
		}
		printf("\nDo you want place more orders ? y $ n : ");
		scanf(" %c",&ans);
	}
	while(ans=='y');
	Totalamount=Totalamount;
	printf("\n\nTotal amount= %d",Totalamount);
	 
	 	 
}

