#include <iostream>
#define fastio ios_base::sync_with_stdio(false);\
        cin.tie(NULL); cout.tie(NULL);

using namespace std;
int main()
{
    char ch; cin>>ch;
    float m[12][12],s=0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin>>m[i][j];
        }
    }
    for (int i = 1; i < 12; i++)
    {
        for (int j = 12-i; j < 12; j++)
        {
            s += m[i][j];
        }
    }
    if (ch == 'S')
    {
        printf("%.1f\n",s);
    }
    else if (ch == 'M')
    {
        printf("%.1f\n",s/66.);
    }
    return 0;
}
