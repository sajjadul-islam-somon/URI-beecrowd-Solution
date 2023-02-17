#include <iostream>
using namespace std;
int main()
{
    int l,c, a,b;
    cin>>l>>c;
    a = (l * c) + ((l - 1) * (c - 1));
    b = ((l - 1) * 2) + ((c - 1) * 2);
    cout<<a<<endl<<b<<endl;
    return 0;
}
