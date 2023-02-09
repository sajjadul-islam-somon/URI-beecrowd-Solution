#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0,p=0;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        double avg = sum/n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > avg)   p++;
        }
        printf("%.3f%%\n", ((float)p/n)*100.0);
    }
    return 0;
}
