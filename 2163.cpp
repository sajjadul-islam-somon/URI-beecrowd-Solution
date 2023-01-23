#include <iostream>
#define tle ios_base::sync_with_stdio(false);\
        cin.tie(NULL); cout.tie(NULL);

using namespace std;
int main()
{
    int r,c,x=0,y=0;
    bool find = false;
    cin>>r>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 42)
            {
                if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7)
                    if(arr[i][j-1]==7 && arr[i][j+1]==7)
                        if(arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7)
                    {
                        x = i+1;
                        y = j+1;
                    }
                }
        }
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}
