#include <stdio.h>
#include <math.h>

int main()
{
    double x, a, b, F;
    double pi = 3.1415926535;

    scanf("%lf", &x);

    a = sin(3 * pi - 2 * x);
    b = cos(5 * pi + 2 * x);

    F = 1.0 / 4.0 * a * a * b * b;

    printf("%lf\n", F);

    return 0;
}