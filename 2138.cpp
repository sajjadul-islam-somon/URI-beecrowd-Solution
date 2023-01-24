#include<iostream>
#include<algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    string str;
    while (cin>>str)
    {
        int a[] = {0,0,0,0,0,0,0,0,0,0};
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '0')       a[0]++;
            else if(str[i] == '1')  a[1]++;
            else if(str[i] == '2')  a[2]++;
            else if(str[i] == '3')  a[3]++;
            else if(str[i] == '4')  a[4]++;
            else if(str[i] == '5')  a[5]++;
            else if(str[i] == '6')  a[6]++;
            else if(str[i] == '7')  a[7]++;
            else if(str[i] == '8')  a[8]++;
            else if(str[i] == '9')  a[9]++;
        }    
        int max=0,n=0;
        for (int i = 0; i < 10; i++)
        {
            if(a[i]>=max)
            {
                max = a[i]; n = i;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
