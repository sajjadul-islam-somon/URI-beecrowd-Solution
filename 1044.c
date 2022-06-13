#include <stdio.h>

int main()

{
    double a, b, c, x, y, z;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a >= b && a >= c)
    {
        x = a;
        if (b >= c)
        {
            y = b;
            z = c;
        }
        else
        {
            y = c;
            z = b;
        }
    }
    else if (b >= a && b >= c)
    {
        x = b;
        if (a >= c)
        {
            y = a;
            z = c;
        }
        else
        {
            y = c;
            z = a;
        }
    }
    else if (c >= b && c >= a)
    {
        x = c;
        if (a >= b)
        {
            y = a;
            z = b;
        }
        else
        {
            y = b;
            z = a;
        }
    }

    if (x >= y + z)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (x * x == y * y + z * z)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (x * x > y * y + z * z)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (x * x < y * y + z * z)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (x == y && y == z)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (x == y || y == z)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}