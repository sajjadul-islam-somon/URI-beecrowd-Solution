#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+20);

    for (int i = 0; i < 20; i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
