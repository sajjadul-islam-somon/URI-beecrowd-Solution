#include <iostream>
using namespace std;
int main()
{
    int n,temp=0,sum=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        temp = a[i]/3;
        a[i] = temp*3;
        sum += a[i];
    }
    cout<<sum<<"\n";
    return 0;
}
