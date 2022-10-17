#include <stdio.h>

int main()
{
    int  init_mm, m, dm, cm, mm, rem;

    printf("Please enter the amount of millimeters (mm): ");
    scanf("%d", &init_mm);

    mm = init_mm;

    //Get the number of meters
    m = mm/1000;

    //Get the remainder of mm
    rem = mm%1000;

    //Get the number of decimeters
    dm = rem/100;

    //Get the number of centimeters
    cm = (rem%100)/10;

    //Get the number of millimeters
    mm = (rem%100)%10;

    printf("%d millimeters = \n", init_mm);
    printf("%d meters\n", m);
    printf("%d decimeters\n", dm);
    printf("%d centimeters\n", cm);
    printf("%d millimeters\n", mm);

    return 0;
}

