#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int ar[t];
    int count;
    for(int i=0;i<t;i++)
    {
        count=0;
        long long int a,b,c,d;
        a=0;
        b=0;
        c=0;
        d=0;
        cin>>a>>b>>c>>d;
        if(b>a)
        {
            count++;
        }
        if(c>a)
        {
            count++;
        }
        if(d>a)
        {
            count++;
        }

        ar[i]=count;
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}

    
