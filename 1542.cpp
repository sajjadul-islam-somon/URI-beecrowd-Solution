#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    while (cin>>a && a)
    {
        cin>>b>>c;
        int result = (a*b*c)/(c-a);
        if (result>1)
        {
            cout<<result<<" paginas\n";
        }
        else cout<<result<<" pagina\n";
    }
    return 0;
}
