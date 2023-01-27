#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int r1,r2,r3;
        cin>>r1>>r2;
        r3 = (r1*2 + r2*2)/2;
        cout<<r3<<"\n";
    }
    return 0;
}
