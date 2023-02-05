#include <iostream>
using namespace std;

int main()
{
	double a,b,r;
	cin>>a>>b;
	r = abs(a-b);
	r = (r/a)*100.0;
	printf("%.2lf%%\n",r);
	return 0;
}
