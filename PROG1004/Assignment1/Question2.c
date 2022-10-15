#include <stdio.h>

int main()
{
    int  init_mm, m, dm, cm, mm;

    printf("Please enter the amount of millimeters (mm): ");
    scanf("%d", &init_mm);

    mm = init_mm;

    //Get the number of meters
    m = mm/1000;

    //Get the number of decimeters
    dm = (mm%1000)/100;

    //Get the number of centimeters
    cm = ((mm%1000)%100)/10;

    //Get the number of millimeters
    mm = ((mm%1000)%(100))%10;

    printf("%d millimeters = \n", init_mm);
    printf("%d meters\n", m);
    printf("%d decimeters\n", dm);
    printf("%d centimeters\n", cm);
    printf("%d millimeters\n", mm);

    return 0;
}

