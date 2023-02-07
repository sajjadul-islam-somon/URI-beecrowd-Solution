#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
    string s[t];
    long a[t];
    for (int i=0;i<t;i++)
    {
        cin >> s[i];
        a[i] = stoi(s[i], 0,2);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%c", a[i]);
    }
    cout<<"\n";
    }
    return 0;
}
