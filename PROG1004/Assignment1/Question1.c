#include <stdio.h>
#include <math.h>

int main()
{
    double vmax, rad, AngleOfBank, friction;
    const double g = 9.8;
    const double pi = 22.0/7.0;

    printf("Enter the radius of curve in km: ");
    scanf("%lf", &rad);

    printf("Enter the angle of the bank in degrees: ");
    scanf("%lf", &AngleOfBank);

    printf("Enter the friction coefficient: ");
    scanf("%lf", &friction);

    //Converting km to m
    rad = rad*1000;

    //Converting degrees to radians
    AngleOfBank = (pi/180)*AngleOfBank; 

    //Numerator of formula
    double numer = (rad*g) * ((sin(AngleOfBank))+((friction)*cos(AngleOfBank))); 

    //Denominator of formula
    double denom = ((cos(AngleOfBank))-((friction)*sin(AngleOfBank))); 

    //Solving for Vmax
    vmax = pow((numer/denom),0.5); 

    printf("The maximum speed of the car is %.2f m/s \n", vmax);

    return 0;
}

