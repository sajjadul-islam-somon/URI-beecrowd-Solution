#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t,a,b,c,d,e,f,s1=0,s2=0,s3=0,ss1=0,ss2=0,ss3=0;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cin>>a>>b>>c>>d>>e>>f;
        s1 += a;
        s2 += b;
        s3 += c;
        ss1 += d;
        ss2 += e;
        ss3 += f;
    }
    printf("Pontos de Saque: %.2f %%.\n", ((ss1)*100.0)/s1);
    printf("Pontos de Bloqueio: %.2f %%.\n", ((ss2)*100.0)/s2);
    printf("Pontos de Ataque: %.2f %%.\n", ((ss3)*100.0)/s3);
    return 0;
}
