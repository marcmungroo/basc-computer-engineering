/*
Write a program that reads in a number of cents, eg. 3965, and converts this 
number of cents to its lowest number of ten dollar bills, five dollar bills, one 
dollar bills, quarters, dimes and nickels. The above input of 3965 results in an 
output of: 
 
3 ten dollar bills 
1 five dollar bill 
4 one dollar bills 
2 quarters 
1 dime 
1 nickel
*/
#include <stdio.h>

int main()
{
    int cents;

    printf("Enter the number of cents: ");
    scanf("%d",&cents);

    int Bills_10 = cents/1000;

    int Bills_5 = (cents%1000)/500;

    int Bills_1 = (cents%500)/100;

    int Quarters = (cents%100)/25;

    int Dime = (cents%25)/10;

    int Nickel = (cents%10)/5;

    printf("%d ten dollar bill(s)\n",Bills_10);
    printf("%d five dollar bill(s)\n",Bills_5);
    printf("%d one dollar bill(s)\n",Bills_1);
    printf("%d quarter(s)\n",Quarters);
    printf("%d dime(s)\n",Dime);
    printf("%d nickel(s)\n",Nickel);

    return 0;    
}