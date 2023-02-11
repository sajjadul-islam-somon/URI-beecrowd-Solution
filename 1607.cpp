#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s1, s2;
    while (t--)
    {
        cin>>s1>>s2;
        int l, c=0;
        for (int i = 0; s1[i];i++)
        {
            l = s2[i] - s1[i];
            if (l<0)
            {
                c += 26 + l;
            }
            else c += l;
        }
        cout<<c<<endl;
    }
    return 0;
}
