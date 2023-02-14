#include<iostream>
using namespace std;
int main()
{
    int t=3,sum=0;
    while (t)
    {
        string s;
        getline(cin,s);
        if (s == "caw caw")
        {
            cout<<sum<<"\n";
            sum = 0;
            t--;
        }
        else
        {
            if (s == "---")      sum += 0;
            else if (s == "--*") sum += 1;
            else if (s == "-*-") sum += 2;
            else if (s == "-**") sum += 3;
            else if (s == "*--") sum += 4;
            else if (s == "*-*") sum += 5;
            else if (s == "**-") sum += 6;
            else if (s == "***") sum += 7;
        }
    }
    return 0;
}
