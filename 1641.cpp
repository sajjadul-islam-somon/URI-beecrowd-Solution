#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r,w,l,t=0;
    float h;
    while (cin>>r)
    {
        if (r==0)    break;
        cin>>w>>l;
        t++;
        h = sqrt(w*w+l*l);
        if (r<(h/2.))    cout<<"Pizza "<< t <<" does not fit on the table."<<endl;
        else             cout<<"Pizza "<< t <<" fits on the table."<<endl;
    }
    return 0;
}
