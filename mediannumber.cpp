#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b and a>c)
        {
            if(b>c)
            {
                ar[i]=b;
            }
            else{
                ar[i]=c;
            }

        }
        if(b>a and b>c)
        {
            if(a>c)
            {
                ar[i]=a;
            }
            else{
                ar[i]=c;
            }

        }
        if(c>b and c>a)
        {
            if(b>a)
            {
                ar[i]=b;
            }
            else{
                ar[i]=a;
            }

        }


    }
    for(int i=0;i<t;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}
