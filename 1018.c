#include <stdio.h>

int main()
{
    int N,r;
    scanf("%d", &N);
    printf("%d\n", N);
    
    printf("%d nota(s) de R$ 100,00\n",N/100);
    
    r = N%100;
    printf("%d nota(s) de R$ 50,00\n", r/50);
    
    r %= 50;
    printf("%d nota(s) de R$ 20,00\n", r/20);
    
    r %= 20;
    printf("%d nota(s) de R$ 10,00\n", r/10);
    
    r %= 10;
    printf("%d nota(s) de R$ 5,00\n", r/5);
    
    r %= 5;
    printf("%d nota(s) de R$ 2,00\n", r/2);
    
    r %= 2;
    printf("%d nota(s) de R$ 1,00\n", r/1);
    return 0;
}


