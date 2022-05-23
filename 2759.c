#include<stdio.h>
int main()
{
    char x,y,z;
    scanf("%c %c %c",&x,&y,&z);
    printf("A = %c, B = %c, C = %c\n",x,y,z);
    printf("A = %c, B = %c, C = %c\n",y,z,x);
    printf("A = %c, B = %c, C = %c\n",z,x,y);
     return 0;
}