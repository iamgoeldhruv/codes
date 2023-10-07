#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    {
        int c;
        long long int a=0;
        long long int b=0;
        cin>>a>>b;
        if(a==b)
        {
            c=0;
        }
        if(b>a and ((b-a)%2)==0)
        {
            c=2;
        }
        if(b>a and ((b-a)%2)!=0)
        {
            c=1;
        }
        if(b<a and ((a-b)%2)==0)
        {
            c=1;
        }
        if(b<a and ((a-b)%2)!=0)
        {
            c=2;
        }
        ar[i]=c;
    }
    for(int i=0;i<t;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}
        
        
        

        

    
