
////Write a program to swap the two numbers using friend function without using third variable  

#include <iostream>
using namespace std;

class Value 
{
public:
    int a;
    int b;

    
    Value() 
	{
        cout << "Enter a value of a: ";
        cin >> a;
        cout << "Enter a value of b: ";
        cin >> b;
    }

    friend void getData(Value& v);
};
void getData(Value& v) 
{
    v.a = v.a + v.b; 
    v.b = v.a - v.b; 
    v.a = v.a - v.b; 

    cout << "Value of A: " << v.a << endl;
    cout << "Value of B: " << v.b << endl;
}
int main() 
{
    Value v1; 
    getData(v1);     
}
