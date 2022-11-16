#include <stdio.h>
#include <math.h>

int main()
{


    int i;
    double x, sign, num, denom, term, series;
    denom = 1.0;

    printf("\n Enter a value for x in g(x) = x sin x : ");
    scanf("%lf", &x);

    series = pow(x,2);

    for(i=1; i<=34; i+=1)
    {
        sign = pow(-1,i);
        num = pow(x,((2*i)+2));
        denom = denom*(2*i)*((2*i)+1);
        term = sign*(num/denom);
        series = series + term;

    }

    printf("\n g(x) = %2.2f \n", series);

    return 0;
}