#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        int n=0;
        cin>>n;
        a[i]=n;
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
}