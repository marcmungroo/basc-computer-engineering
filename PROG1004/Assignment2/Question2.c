#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    double x1, x2, fx1, fx2, increment, width, tempArea, totalArea;
    increment = 0.01;
    totalArea = 0;
    x1 = 0;
    x2 = x1 + increment;
    width = x2 - x1;

    for (i = 1; i <= 400; i += 1)
    {
        fx1 = (4*x1)-(pow(x1,2));
        fx2 = (4*x2)-(pow(x2,2));

        tempArea = (0.5) * (fx1 + fx2) * (width);

        totalArea = totalArea + tempArea;

        //Move on to next trapezoid

        x1 = x2;
        x2 = x1 + increment;
    }
    
    totalArea = fabs(totalArea);

    printf("\n The area bounded by the curve and the x-axis is: %2.8f units squared\n", totalArea);

    return 0;
}