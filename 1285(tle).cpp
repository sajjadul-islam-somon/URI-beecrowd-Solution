
// Though this code is correct but it'll cause TLE in Beecrowd(URI) :(

#include <iostream>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    while (1)
    {
        int n, m, c = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            int a[10] = {0}, rem = 0,x;
            x = i;
            while (x)
            {
                rem = x % 10;
                if (a[rem] == 1)
                    break;
                else
                    a[rem] = 1;
                x /= 10;
            }
            if (x==0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
