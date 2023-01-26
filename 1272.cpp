#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if (s[0]>='a' && s[0]<= 'z')
        {
            cout<<s[0];
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' && s[i+1]>= 'a' && s[i+1]<='z')
            {
                cout<<s[i+1];
            }
        }
        cout<<"\n";
    }
    return 0;
}
