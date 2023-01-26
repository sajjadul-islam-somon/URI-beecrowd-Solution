#include <iostream>
#define fastio ios_base::sync_with_stdio(0);\
                cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    string s;
    while (getline(cin,s))
    {
        if (s == "*")  return 0;
        int c=0,o=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                c++;
                if (toupper(s[0]) == toupper(s[i+1]))
                {
                    o++;
                }
            }
        }
        if (c == o) cout<<"Y\n";
        else        cout<<"N\n";
    }
    return 0;
}
