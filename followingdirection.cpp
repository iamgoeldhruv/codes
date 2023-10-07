#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int z=0;
    for(int i=0;i<a;i++)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        int y=0;
        
        for(int j=0;j<n;j++)
        {
            if(s[i]=='L')
            {
                x--;
            }
            if(x==1 && y==1)
            {
                cout<<"YES";
                z++;
                break;

            }
            if(s[i]=='R')
            {
                x++;
            }
            if(x==1 && y==1)
            {
                cout<<"YES";
                z++;
                break;


            }
            if(s[i]=='U')
            {
                y++;
                
            }
            if(x==1 && y==1)
            {
                cout<<"YES";
                z++;
                break;


            }
            if(s[i]=='D')
            {
                y--;
                break;

            }
            if(x==1 && y==1)
            {
                cout<<"YES";
                z++;
                break;


            }
        }

    }
    if(z==0)
    {
        cout<<"NO";
    }
}