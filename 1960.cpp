#include <iostream>
using namespace std;

int main()
{
    int l=0, n1=0, n2=0, n3=0;
    string s;
    string str1[] = {"\0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string str2[] = {"\0", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string str3[] = {"\0", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    cin >> s;
    l = s.size();
    n1 = int(s[0])-48; n2=int(s[1])-48; n3 = int(s[2])-48;
    if (l == 1)
    {
        cout << str1[n1] << endl;
    }
    else if (l == 2)
    {
        cout << str2[n1] << str1[n2] << endl;
    }
    else if (l == 3)
    {
        cout<< str3[n1] << str2[n2] << str1[n3] << endl;
    }
    else if (l == 4)
            cout<< "M\n";
    return 0;
}
