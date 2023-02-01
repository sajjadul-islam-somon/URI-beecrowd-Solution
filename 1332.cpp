#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        getline(cin, s);
        if (s.size() == 5)
        {
            printf("3\n");
        }
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o'))
        {
            printf("2\n");
        }
        else
            printf("1\n");
    }
    return 0;
}
