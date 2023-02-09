#include <iostream>
using namespace std;
int main()
{
    int t, a;
    cin >> t>>a;
    string s[a];
    for (int i = 0; i < a; i++)
    {
        cin>>s[i];
        if (s[i] == "fechou")       t++;
        else if (s[i] == "clicou")  t--;
    }
    cout<<t<<endl;
}
