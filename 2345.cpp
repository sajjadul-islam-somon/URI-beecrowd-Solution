#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int aMax = max(a,b);
	int bMin = min(a,b);
	int cMax = max(c,d);
	int dMin = min(c,d);
	cout<<abs((aMax+dMin)-(bMin+cMax))<<"\n";
	return 0;
}
