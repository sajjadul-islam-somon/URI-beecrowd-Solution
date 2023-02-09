#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6];
        bool OK = true;
        bool Check[7];

        for (int i = 0; i <= 6; i++)
            Check[i] = false;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
            if (arr[i] < 1 || arr[i] > 6)
                OK = false;
            else
            {
                if (!Check[arr[i]])
                    Check[arr[i]] = true;
                else
                    OK = false;
            }
        }
        if (OK)
        {
            if ((arr[0] + arr[5] == 7) && (arr[1] + arr[3] == 7) && (arr[2] + arr[4] == 7))
                cout << "SIM\n";
            else
                cout << "NAO\n";
        }
        else
            cout << "NAO\n";
    }
}
