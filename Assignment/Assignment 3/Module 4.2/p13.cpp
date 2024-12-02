
//Write a program to find the max number from given two numbers using friend function 

#include <iostream>
using namespace std;

class Numbers {
public:
    int num1;
    int num2;

    // Constructor to initialize values
    Numbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    // Friend function declaration
    friend void findMax(Numbers& n);
};
void findMax(Numbers& n) 
{
    int maxNum;
    if (n.num1 > n.num2) {
        maxNum = n.num1;
    } else {
        maxNum = n.num2;
    }
    cout << "The maximum number is: " << maxNum << endl;
}

int main() 
{
    Numbers n; 
    findMax(n); 
}
