#include<iostream>
using namespace std;
class areas
{
	public:
	int r,l,w,h,b,area_c,area_r,area_t;
	float pi=3.14;
	
	void area_circle()
	{
		cout<<"Enter value of r :";
		cin>>r;
		area_c=pi*r*r;
		cout<<"Area of circle :"<<area_c;
	}
	
	void area_trialgle()
	{
		cout<<"\nEnter value of Height: ";
		cin>>h;
		cout<<"Enter value of Base: ";
		cin>>b;
		area_t=b*h/2;
		cout<<"Area of Triangle: "<<area_t;
	}
	
	void area_rectangle()
	{
		cout<<"\nEnter value of Lenght: ";
		cin>>l;
		cout<<"Enter value of Width: ";
		cin>>w;
		area_r=l*w;
		cout<<"Area of Rectangle: "<<area_r;
	}
};
main()
{
	areas a1;
	a1.area_circle();
	a1.area_rectangle();
	a1.area_trialgle();	
}
