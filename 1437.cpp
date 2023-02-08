#include <iostream>
using namespace std;

int main()
{
    int t;
    while (cin >> t && t)
    {
        int step = 0;
        string s;
        cin >> s;
        for (int i = 0; i < t; i++)
        {
            if (s[i] == 'D')
            {
                step++;
                if (step > 3)
                {
                    step = 0;
                }
            }
            else if (s[i] == 'E')
            {
                step--;
                if (step == -1)
                {
                    step = 3;
                }
            }
        }
        if (step == 0)         cout<<"N\n";
        else if (step == 1)    cout<<"L\n";
        else if (step == 2)    cout<<"S\n";
        else if (step == 3)    cout<<"O\n";
    }
    return 0;
}
