// C Program To Swap Two Numbers Entered By A User

#include <stdio.h>

int main()
{
    double num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("\n");
    printf("Num1 = %f and Num2 = %f ", num1, num2);

    num3 = num1;

    num1 = num2;

    num2 = num3;

    printf("\n\n");
    printf("Num1 = %f and Num2 = %f", num1, num2);
}