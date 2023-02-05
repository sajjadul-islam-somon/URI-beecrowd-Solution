#include <iostream>
#define fastio ios_base::sync_with_stdio(false);\
				cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	int n;
	string s;
	while (cin>>n>>s)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + s[i] - 48;
		}
		if (sum % 3 == 0)
		{
			cout << sum << " sim\n";
		}
		else
			cout << sum << " nao\n";
	}
	return 0;
}
