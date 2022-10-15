/* 
The formula for converting temperatures from Celsius to Fahrenheit is: 
 
Fahrenheit  =  (9 / 5  *  Celsius)  +  32 
 
Write a program that reads in a temperature in Celsius and converts it to a 
temperature in Fahrenheit.
*/
#include <stdio.h>

int main()
{
    double cel, fah;

    printf("Enter the temperature in degrees Celsius: ");
    scanf("%lf", &cel);

    fah = (9.0/5.0 * cel) + 32;

    printf("\n");
    printf("%6.2f degrees Celsius = %6.2f degrees Fahrenheit.", cel, fah);

    return 0;
}