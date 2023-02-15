#include <iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      cin.ignore();
      while (t--)
      {
            string s;
            getline(cin, s);
            int x=0,y=0;
            for (int i = 0; i < s.size(); i++)
            {
                  if (s[i] == '<')
                  {
                        x++;
                  }
                  else if (s[i] == '>' && x > 0)
                  {
                        y++;
                        x--;
                  }
            }
            cout<<y<<endl;
      }
      return 0;
}
