#include <iostream>
using namespace std;

int main()
{
    int t,arr[1000],j=0;
    cin>>t;
    for(int i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j++<<endl;
        if (j == t)
            j=0;
    }
    return 0;
}
