#include <stdio.h>
#include <math.h>

int main()
{
    double R, VOLUME;
    scanf("%lf", &R);
    VOLUME = 4.0/3 * 3.14159 * pow(R, 3);
    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}

