#include<iostream>
#include<string>
using namespace std;
string s1;
int main()
{
    long long int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s1="";
        s1=s1+s[0];
        for(int j=0;j<n-1;j++)
        {
            if(s[j]!=s[j+1] and s[j]!=char(int(s[j+1])+32) and s[j]!=char(int(s[j+1])-32))
            {
                s1=s1+s[j+1];

            }
        }
        
        int c=0;
        if(s[0]=='m' || s[0]=='M')
        {
            c++;
        }
        if(s[1]=='e' || s[1]=='E')
        {
            c++;
        }
        if(s[2]=='o' || s[2]=='O')
        {
            c++;
        }
        if(s[3]=='w' || s[3]=='W')
        {
            c++;
        }
        arr[i]=c;
        
        
        
       
        
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==4)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
     
}