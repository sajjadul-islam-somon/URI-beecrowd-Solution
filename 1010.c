#include <stdio.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d %f", &a,&b,&c);
    d = b * c;
    scanf("%d %d %f", &a,&b,&c);
    d += b * c;
    printf("VALOR A PAGAR: R$ %.2f\n", d);

    return 0;
}

