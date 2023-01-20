#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int h,d,g;
        cin>>h>>d>>g;
        if (200<= h && h<=300 && 50<=d && g>=150)
        {
            cout<<"Sim"<<endl;
        }
        else cout<<"Nao"<<endl;
    }
    return 0;
}
