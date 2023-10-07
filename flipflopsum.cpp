#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;int m=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m+=a[i];
        }
        int mean=m/n;
        if(mean==1)
        cout<<m-4<<endl;
        else if(mean==-1)
        cout<<m+4<<endl;
        else
        {
               for(int k=0;k<n-1;k++)
        {
            if(a[k]==-1 && a[k+1]==-1)
            {
                m+=4;
                break;
            }
        }
        cout<<m<<endl;
        }
        
    }

    return 0;
}