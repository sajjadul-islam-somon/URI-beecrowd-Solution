#include <iostream>
using namespace std;

int c;

int Fibonacci(int n)
{
    c++;
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return Fibonacci(n-2) + Fibonacci(n-1);
}

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        c=0;
        cin>>n;
        int f = Fibonacci(n);
        cout<<"fib("<<n<<") = "<<c-1<<" calls = "<<f<<"\n";
    }
    return 0;
}
