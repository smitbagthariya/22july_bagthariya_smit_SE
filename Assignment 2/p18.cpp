
//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>
main()
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    while (num != 0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Summation of number is %d", sum);
}
