
//WAP to create simple calculator using class 

#include<iostream>
using namespace std;
class calculator
{
	int a;
	int b;
	int sum;
	int sub;
	int mul;
	int div;
	
	public:
		
	void simplecalcy()
	{
		cout<<"Enter value of a: ";
		cin>>a;
		cout<<"Enter value of b: ";
		cin>>b;
		sum=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
	}
	
	void getdata()
	{
		cout<<"Sum: "<<sum;
		cout<<"\nSub: "<<sub;
		cout<<"\nMul: "<<mul;
		cout<<"\nDiv: "<<div;
	}
};
main()
{
	calculator calcy;
	calcy.simplecalcy();
	calcy.getdata();
		
}
