#include <stdio.h>

int main()
{
    char c;
    double a,b,TOTAL;
    scanf("%s", &c);
    scanf("%lf %lf", &a,&b);
    TOTAL = (b * 0.15) + a;
    
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}

