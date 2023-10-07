#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    int a1[n];
    cin>>m;
    int a2[m];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
    }
    int c=0;
    int x;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a1[i]==a2[j])
            {
                c++;
                x=a1[i];
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a1[i];
    }
    for(int j=0;j<m;j++)
    {
        sum2+=a2[j];
    }
    if(c==0)
    {
        if(sum1>=sum2)
        {
            cout<<sum1;
        }
        else{
            cout<<sum2;
        }
    }
    int sum=0;
    int p;
    
    if(c==1)
    {
        if(a2[0]<=a1[0])
        {
            for(int i=0;i<m;i++)
            {
                sum+=a2[i];
                
                if(a2[i]==x)
                {
                    break;

                }


            }
            int z;
            for(int i=0;i<n;i++)
            {
                if(a1[i]==x)
                {
                    z=i;
                    break;
                }
            }
            for(int i=z+1;i<n;i++)
            {
                sum+=a1[i];
            }
            cout<<sum;
        }
        if(a2[0]>a1[0])
        {
            for(int i=0;i<n;i++)
            {
                sum+=a1[i];
                
                if(a1[i]==x)
                {
                    break;

                }


            }
            int z;
            for(int i=0;i<m;i++)
            {
                if(a2[i]==x)
                {
                    z=i;
                    break;
                }
            }
            for(int i=z+1;i<m;i++)
            {
                sum+=a2[i];
            }
            cout<<sum;
        }     

    }

           
    
    
}