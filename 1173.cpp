#include <iostream>
using namespace std;
int main()
{
    int arr[10],n,p=0;
    cin>>n;
    arr[0] = n;
    for (int i = 1; i < 10; i++)
    {
        arr[i] = 2*arr[i-1];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
