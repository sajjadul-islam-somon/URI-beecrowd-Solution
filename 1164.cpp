#include <iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,sum=0,ok=0;
          cin>>n;
          for (int i = 0; i < n; i++)
          {
               sum += i;
               if (sum == n)
               {
                    ok=1;
               }
          }
          if (ok == 1)   cout<<n<<" eh perfeito\n";
          else           cout<<n<<" nao eh perfeito\n";
     }
     return 0;
}
