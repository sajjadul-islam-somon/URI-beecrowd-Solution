#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if (s.length()<=80)
    {
        cout<<"YES\n";
    }
    else if (s.length()>80)
    {
        cout<<"NO\n";
    }
    return 0;
}
