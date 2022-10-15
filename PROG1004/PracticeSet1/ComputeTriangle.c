/*
Write a C program to read in the values of two angles and the included side of a 
triangle, and to compute / output the lengths of the other two sides.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double angle_A, angle_B, angle_C, side_a, side_b, side_c;
    const double pi = 22.0/7.0;

    printf("Enter the value of the first angle (A): ");
    scanf("%lf", &angle_A);

    angle_A = angle_A * (pi/180); // Convert to radians

    printf("Enter the value of the second angle (B): ");
    scanf("%lf", &angle_B);

    angle_B = angle_B * (pi/180); // Convert to radians

    printf("Enter the length of the known side (a): ");
    scanf("%lf", &side_a);
    
    side_b = ((sin(angle_B))/(sin(angle_A)/side_a));

    angle_C = (180*(pi/180)) - (angle_A + angle_B);

    side_c = ((sin(angle_C))/(sin(angle_A)/side_a));

    printf("If a triangle has 3 sides ABC then A =%6.2f , B =%6.2f and C =%6.2f", side_a, side_b, side_c);

    return 0;

}