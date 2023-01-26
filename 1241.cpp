#include <iostream>
using namespace std;
int main()
{
    int t;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int n1 = a.length();
        int n2 = b.length();
        if (n1 >= n2)
        {
            string sub = a.substr(n1-n2, n2);
            if (sub.compare(b) == 0)
            {
                cout << "encaixa\n";
            }
            else cout<<"nao encaixa\n";
        }
        else
            cout << "nao encaixa\n";
    }
    return 0;
}
