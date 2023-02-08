include <iostream>
using namespace std;

int main()
{
    int t, c = 0, n, l;
    cin >> t;
    int arr[t + 1][t + 1];
    for (int i = 0; i < t + 1; i++)
    {
        for (int j = 0; j < t + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] < 2)
            {
                cout<<"U";
            }
            else cout<<"S";
        }
        cout<<"\n";
    }

    return 0;
}
