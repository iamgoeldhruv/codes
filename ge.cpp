#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k,c,b;
        cin>>n>>k>>c>>b;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int z=0;
        int d=0;
        int f;
        for(int j=0;j<n;j++)
        {
        
            d+=a[j];

        }
        
        if((n*k)%d==0)
        {
            f=(n*k)/d;
        }
        else{
            f=((n*k)/d)+1;

        }
        int rem=n-f;
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-1;k++)
            {
                if(a[k]<a[k+1])
                {
                    swap(a[k],a[k+1]);
                }
            }
        }
        for(int j=0;j<f;j++)
        {
            z+=k-a[j];
        }
        cout<<(n*c)+((z*(z+1))/2)-(b*rem)<<endl;
        

    }
}