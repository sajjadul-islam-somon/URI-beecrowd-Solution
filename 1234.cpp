#include <iostream>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s))
    {
        int c=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]!=' ')
            {
                c++;
                if (s[i]>96 && c%2==1)
                {
                    s[i] -= 32;
                }
                else if (s[i]<96 && c%2==0)
                {
                    s[i] += 32;
                }
            }
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
