#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int palin(string s)
{
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p)
    {
        cout<<1;
    }
    else{
        cout<<0;

    }
}
int pallin()
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                c++;
            }
        }
        cout << c << endl ;
        if(c==n)
        {
            cout<<0<<endl;
            
        }
        else{
            int x=1;
            while(true)
            {
                string s;
                for(int j=0;j<n;j++)
                {
                    int w=arr[j]%x;
                    
                    
                    s+=to_string(w);
                   
                }
                int a=palin(s);
                if(a==1)
                {
                     cout<<x<<endl;
                    break;
                }
                else{
                    x++;
                }

            }
        }
    }
}