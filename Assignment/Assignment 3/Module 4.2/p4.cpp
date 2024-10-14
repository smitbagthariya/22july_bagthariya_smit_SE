
//Write a program of Addition, Subtraction, Division, Multiplication using constructor.  

#include<iostream>
using namespace std;
class calculator
{	
	public:
	sum(int a,int b)
	{
		int sum,sub,mul,div;
		cout<<"Enter value of a: ";
		cin>>a;
		cout<<"Enter value of b: ";
		cin>>b;
	
		sum = a + b;
		sub = a - b;
		mul = a * b;
		div = a / b;
		cout<<"Addition : "<<sum;
		cout<<"\nSubtraction : "<<sub;
		cout<<"\nMultiflication : "<<mul;
		cout<<"\nDivision : "<<div;
	}	
};
main()
{	
	int a;
	int b;
	calculator c1;
	c1.sum(a,b);
}
