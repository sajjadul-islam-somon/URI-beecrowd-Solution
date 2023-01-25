#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[21],s2[21];
    cin>>s1>>s2;
    // int cmp = s1.compare(s2);  /*It's a dedicated STL function in c++*/
    int cmp = strcmp(s1,s2);    /*This function is faster than both compare() , lexicographical_compare() function.*/
    if (cmp<0)
    {
        cout<<s1<<"\n"<<s2<<"\n";
    }
    else if (cmp>0)
    {
        cout<<s2<<"\n"<<s1<<"\n";
    }
    return 0;
}
