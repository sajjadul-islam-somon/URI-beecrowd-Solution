#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int l=0;
        if (a.length() >= b.length())
            l = a.length();
        else
            l = b.length();
        for (int i = 0; i < l; i++)
        {
            if (i<a.length())       cout<<a[i];
            if(i<b.length())   cout<<b[i];
        }
        cout << "\n";
    }
    return 0;
}
