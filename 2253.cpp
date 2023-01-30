#include <iostream>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        if (s.length() >= 6 && s.length() <= 32)
        {
            int A = 0, a = 0, n = 0,c=0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 65 && s[i] <= 90)
                {
                    A++;
                }
                else if (s[i] >= 97 && s[i] <= 122)
                {
                    a++;
                }
                else if (s[i] >= '0' && s[i] <= '9')
                {
                    n++;
                }
                else
                {
                    c++;
                }
            }
            if (a>0 && A>0 && n>0 && c==0)
            {
                cout<<"Senha valida.\n";
            }
            else
            {
                cout<<"Senha invalida.\n";
            }
        }
        else
        {
            cout << "Senha invalida.\n";
        }
    }
    return 0;
}
