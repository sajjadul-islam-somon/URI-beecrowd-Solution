#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double r=0.0;
    while (t--)
    {
        r += 6.0;
        r = 1.0/r;
    }
    r += 3.0;
    printf("%.10lf\n", r);
}
