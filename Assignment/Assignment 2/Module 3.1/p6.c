
//WAP to convert years into days and days into years  

#include <stdio.h>

main() {
    int years, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365; 

    printf("\n%d years is equal to %d days.\n", years, days);
    
    years = days / 365;
    
    printf("\n%d days is equal to %d years.\n", days, years);


}
