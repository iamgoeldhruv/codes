#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int s;
    cin>>s;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a1,b,c=0;
    for(int i=0;i<n;i++)
    {
        a1=i;
        int sum1=0;
        
        for(int j=i;j<n;j++)
        {
           sum1+=a[j];
           if(sum1>s)
           {
                break;
           }
           else if(sum1==s)
           {
                c++;
                b=j;
                break;

           }
           
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==1)
    {
        for(int i=a1;i<=b;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    if(c==0)
    {
        cout<<-1;
    }

}