/*
If three resistors , R1, R2, and R3 are combined in parallel, then the net resistance, 
R, of the combination is derived from the formula: 

(1/R) = (1/R1) + (1/R2) + (1/R3)

Write a program to read in the values of three such resistors and output the net 
resistance.
*/
#include <stdio.h>

int main()
{
    double R, R1, R2, R3;

    printf("Enter the first value of the first resistor in Ohms: ");
    scanf("%lf",&R1);

    printf("Enter the first value of the second resistor in Ohms: ");
    scanf("%lf",&R2);

    printf("Enter the first value of the third resistor in Ohms: ");
    scanf("%lf",&R3);

    R = 1.0/(1.0/R1 + 1.0/R2 + 1.0/R3);

    printf("The net resistance is %4.2f Ohms", R);

    return 0;
}