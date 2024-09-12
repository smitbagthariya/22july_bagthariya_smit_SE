
//WAP to find area of circle, rectangle and triangle  


#include<stdio.h>
main()
{
	int l;
	int w;
	int area;
	
	printf("Enter a value of Lengh :");
	scanf("%d",&l);
	printf("Enter a value of Weight :");
	scanf("%d",&w);
	area = 2*l+w;
	printf("Area of rectangle is :%d",area);
	
	int b;
	int h;
	
	printf("\n\nValue of b :");
	scanf("%d",&b);
	printf("Value of h :");
	scanf("%d",&h);
	int a=(b*h)/2;
	printf("Area of triangle is %d",a);
	
	float pi =3.14;
	float r;
	float area_c;
	
	printf("\n\nValue of PI :%f",pi);
	printf("\nEnter a value of R :",r);
	scanf("%f",&r);
	area_c = pi*r*r;
	printf("Area of circle is :%f",area_c);
}
