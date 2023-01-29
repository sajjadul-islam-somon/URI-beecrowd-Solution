#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s1="abcdefghijklmnopqrstuvwxyz", s2;
        getline(cin,s2);
        int c=0;
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s2.size(); j++)
            {
                if (s1[i] == s2[j])
                {
                    c++;
                    break;
                }
            }
        }
        if (c == 26)
        {
            cout<<"frase completa\n";
        }
        else if (c >= 13)
        {
            cout<<"frase quase completa\n";
        }
        else cout<<"frase mal elaborada\n";
    }
    
    return 0;
}
