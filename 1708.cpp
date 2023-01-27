#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,d=0,r=0;
    cin>>a>>b;
    d=abs(a-b);
    r = b/d;
    cout<<ceil(r)<<"\n";
    return 0;
}
