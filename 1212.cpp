#include <stdio.h>
#include <string.h>

int main(){
    long x, y, carry;
    while(1){
             scanf("%ld %ld", &x,&y);
             if(x == 0 && y == 0) break;
             long a,b,c,t;
                c = 0;
                t = 0;
                while(1){
                 a=x%10;
                 b=y%10;
                 x=x/10;
                 y=y/10;
                 if((a+b+c)>=10){
                                 t++;
                                 c=1;
                 }
                 else c = 0; 
                 if(x==0 && y==0)break;
    }
             if(t == 0) printf("No carry operation.\n");
             else if(t==1)printf("1 carry operation.\n");
             else printf("%ld carry operations.\n", t);
    }
    return 0;
}
