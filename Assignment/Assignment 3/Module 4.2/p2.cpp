
//Define a class to represent a bank account. Include the following members:   
//Data Member:-  
//
//		- Name of the depositor -  
//		- Account Number 
//		- Type of Account -  
//		- Balance amount in the account  -  
//Member Functions:-
//  
//		- To assign values 
//		- To deposited an amount 
//		- To withdraw an amount after checking balance     
//		- To display name and balance  

#include<iostream>
using namespace std;
class bankAccount
{
	string Depositorname;
	int AccountNumber;
	string AccountType;
	double Balance;
	int amount;
	int money;
	int choice;
	
	public:
	void setdata()
	{
		cout<<"Enter Depositor Name: ";
		cin>>Depositorname;
		cout<<"Enter Account Number: ";
		cin>>AccountNumber;
		cout<<"Enter Account Type: ";
		cin>>AccountType;
		cout<<"Enter Balance: ";
		cin>>Balance;	
	}
	
	void amountdata()
	{
		cout<<"If Cash Deposit: 1";
		cout<<"\nIf Cash Withdraw: 2";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:		
				cout<<"Enter your amount: ";
				cin>>amount;
				Balance+=amount;
			break;
			
			case 2:
				cout<<"Enter withdraw amount: ";
				cin>>money;
				if(Balance>money)
				{
					Balance-=money;
				}
				else
				{
					cout<<"\nyour Balance: "<<Balance;
					cout<<"\nyou can not withdraw amount: ";
				}
			break;
		
		}
	}
	void getdata()
	{
		cout<<"\nDepositor Name = "<<Depositorname;
		cout<<"\nAccount Number = "<<AccountNumber;
		cout<<"\nAccount Typr = "<<AccountType;
		cout<<"\nCurrent balance = "<<Balance;	
	}	
	
};
main()
{
	bankAccount A1;
	A1.setdata();
	A1.amountdata();
	A1.getdata();	
}
