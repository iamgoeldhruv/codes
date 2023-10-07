#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    
    int z;
    int f=1;
    if(a>b)
    {
        z=1;
    }
    else{
        z=0;
    }
    if(z==0)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0 and b%i==0)
            {
                f=i;

            }
        }
    }
    else{
        for(int i=1;i<=a;i++)
        {
            if(a%i==0 and b%i==0)
            {
                f=i;

            }
        }
    }
    return f;
    
    
    




    
}
int main()
{
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int ans;
    ans=hcf(a,b);
    cout<<ans;
    return 0;
}