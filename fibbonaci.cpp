#include<iostream>
using namespace std;
int fib(int n)
{
    int ans;
    if(n==1)
    {
        ans=1;
        return ans;
    }
    if(n==2)
    {
        ans=1;
        return ans;
    }
    else{
        ans=fib(n-2)+fib(n-1);
        return ans;
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=fib(i);
        cout<<a<<" ";
    
    }
    return 0;

}