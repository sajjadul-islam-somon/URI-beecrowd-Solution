#include <stdio.h>

int main()
{
    int h,NUMBER;
    float c,SALARY;
    
    scanf("%d %d %f", &NUMBER,&h,&c);
    SALARY = h * c;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %0.2f\n", SALARY);

    return 0;
}
