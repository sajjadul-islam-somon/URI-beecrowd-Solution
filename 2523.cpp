#include<iostream>
using namespace std;
int main()
{
    string s;
    while (cin>>s)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<s[a[i]-1];
        }
        cout<<endl;
    }
    return 0;
}
