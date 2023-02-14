#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int n;
      while (cin>>n)
      {
            int a[n],l;
            for (int i = 0; i < n; i++)
            {
                  cin>>a[i];
            }
            sort(a, a+n);
            l = n/2;
            cout<<l<<" "<<a[l] - a[l-1]<<endl;
      }
      return 0;
}
