#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c and b>d)
        
        {
            cout<<"LOKI ESCAPES"<<endl;
            

        }
        else if(a>c and b<d)
        {
            cout<<"TVA CAPTURES LOKI"<<endl;
        }
        else if(a<c and b<d)
        {
             cout<<"LOKI ESCAPES"<<endl;


        }
        else if(a<c and b>d)
        {
            cout<<"TVA CAPTURES LOKI"<<endl;
        }
        

        else if(a==c)
        {
             cout<<"LOKI ESCAPES"<<endl;

        }
        else if(b==d)
        {
             cout<<"LOKI ESCAPES"<<endl;
        }
        


    }
}