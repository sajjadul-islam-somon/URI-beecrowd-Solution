#include<iostream>
#include<numeric>   //<algorithm> in C++ 20

using namespace std;

int main()
{
    int t;
	cin>>t;
	while (t--)
	{
		int r,v,D,d;
		cin>>r>>v;
		cout<<gcd(r,v)<<"\n";   // __gcd() in C++ 20
	}
    return 0;
}
