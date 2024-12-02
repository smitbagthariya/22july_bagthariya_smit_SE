
//Write a program of Addition, Subtraction, Division, Multiplication using constructor.  

#include<iostream>
using namespace std;
class calculator
{	
	public:
	float a;
	float b;
	
	calculator()
	{
		float sum,sub,mul,div;
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
	
	calculator c1;
}
