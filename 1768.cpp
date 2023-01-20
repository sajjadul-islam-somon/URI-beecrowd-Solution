#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            for (int j = n / 2; j > i; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < (2 * i) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = n / 2; j > i; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < (2*i)+1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
