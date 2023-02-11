#include <iostream>
using namespace std;

int main()
{
    int h,n;
    cin>>h>>n;
    int a[n];
    cin>>a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(abs(a[i]-a[i-1]) > h)
        {
            cout<<"GAME OVER\n";
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}
