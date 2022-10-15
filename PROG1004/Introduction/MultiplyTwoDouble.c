// C Program to Multiply two Floating Point Numbers

#include <stdio.h>

int main()
{
    double num1, num2, product;

    printf("Enter the first floating point number: ");
    scanf("%lf",&num1);

    printf("Enter the second floating point number: ");
    scanf("%lf",&num2);

    product = num1*num2;

    printf("The product of %f and %f is %f", num1, num2, product);

    return 0;
}