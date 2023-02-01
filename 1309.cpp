#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2))
    {
        cout << "$";
        for (int i = 0; i < s1.size(); i++)
        {
            if (i > 0 && (s1.size() - i) % 3 == 0)
            {
                cout<<",";
            }
            cout<<s1[i];
        }
        cout<<".";
        if (s2.size() < 2)
        {
            cout<<"0";
        }
        for (int i = 0; i < s2.size(); i++)
        {
            cout<<s2[i];
        }
        cout<<"\n";
    }
}
