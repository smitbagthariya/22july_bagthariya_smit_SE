
//WAP to print Fibonacci series up to given numbers  

#include <stdio.h>
main() 
{
    int num, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Recursive logic without a function
    for (int i=num;i>1;i--) 
	{
        fact *= i;
    }

    printf("Factorial of %d is %d\n", num, fact);
}
