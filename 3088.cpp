#include <iostream>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == ' ') && (s[i+1] == ',' || s[i+1] == '.'))
            {
                continue;
            }
            else cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
