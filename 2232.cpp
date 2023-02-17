#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,sum=0;
        cin>>l;
        for (int i = 0; i < l; i++)
        {
            sum += pow(2,i);
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
