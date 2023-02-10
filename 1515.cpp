#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
     int c;
     while (cin >> c && c)
     {
          string s, rs;
          int y, t, min = 2114;
          while (c--)
          {
               cin >> s >> y >> t;
               if ((y - t) < min)
               {
                    min = y - t;
                    rs = s;
               }
          }
          cout << rs << "\n";
     }
     return 0;
}
