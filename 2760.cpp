#include<iostream>
using namespace std;
int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    cout<<a+b+c<<"\n";
    cout<<b+c+a<<"\n";
    cout<<c+a+b<<"\n";
    cout<<a.substr(0,10)+b.substr(0,10)+c.substr(0,10)<<"\n";
    return 0;
}
