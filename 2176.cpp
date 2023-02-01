#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
    }
    if (c % 2 == 0)
    {
        s += '0';
    }
    else s += '1';
    cout<<s<<"\n";
    return 0;
}
