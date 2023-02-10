#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
