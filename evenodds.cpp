#include<iostream>
using namespace std;
int main()
{
    long long n;
    long long k;
    cin>>n>>k;
    
    
    if((n)%2==0)
    {
        if(k<=(n)/2)
        {
            cout<<2*k-1;
        }
        else{
            cout<<2*k-n;
        }

    }
    if((n)%2!=0)
    {
        if(k<=(n/2+1))
        {
            cout<<2*k-1;
        }
        else{
            cout<<2*k-n-1;
        }
    }
    

}