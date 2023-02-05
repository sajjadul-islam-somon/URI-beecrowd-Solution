#include <iostream>
#include <cmath>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c && a && b && c)
	{
		cout << (int)cbrt(a * b * c) << "\n";
	}
	return 0;
}
