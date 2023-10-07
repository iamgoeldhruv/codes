#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=1;
        for(int j=0;j<n;j++)
        {
            
            for(int k=0;k<n;k++)
            {
                if(j%2==0)
                {
                    if(k%2!=0 and s[k]==s[j])
                    {
                        a=0;
                        break;
                    }
                }
                if(j%2!=0)
                {
                    if(k%2==0 and s[k]==s[j])
                    {
                        a=0;
                    }
                }

            }
        }
        if(a==1)
        {
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}