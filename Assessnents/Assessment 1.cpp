// Assissement 1


#include<stdio.h>
main()
{
	int choice,qty,Totalamount=0,amount;
	char ans,y,n;
	
	 do
	 {
		printf("-------manu-------");
		printf("\n\t\t welcome to Food point\n\n");
		printf("item\t\t Prize");
		printf("\n1.Pizza\t\t 100");
		printf("\n2.Dosa\t\t 130");
		printf("\n3.Idli\t\t 50");
		printf("\n4.Burger\t 50");
		printf("\n5.Pasta\t\t 70");
		printf("\n6.Sandwich\t 70");
		printf("\n7.Dabeli\t 25");
		printf("\n8.Vadapav\t 30");
		printf("\n9.Samosa\t 30");
		printf("\n10.paf\t\t 20");
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
			
			case 5:
				printf("\nYou have selected Pasta");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*70;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 6:
				printf("\nYou have selected Sendwich");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*70;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 7:
				printf("\nYou have selected Dabeli");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*25;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 8:
				printf("\nYou have selected Vadapav");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*30;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 9:
				printf("\nYou have selected Samosa");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*30;
				printf("\nAmount: %d",amount);
				Totalamount=Totalamount+amount;
				printf("\nTotal amount= %d",Totalamount);
			break;
			
			case 10:
				printf("\nYou have selected Paf");
				printf("\n\nEnter the quentity :");
				scanf("%d",&qty);
				amount=qty*20;
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
	 printf("Thenk you for visit");
	 
	 	 
}

