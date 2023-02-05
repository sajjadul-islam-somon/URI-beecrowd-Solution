#include <iostream>
using namespace std;

int main()
{
	unsigned long a, b, x;
	while (cin >> a >> b)
	{
		x = a ^ b;
		cout << x << "\n";
	}
	return 0;
}
