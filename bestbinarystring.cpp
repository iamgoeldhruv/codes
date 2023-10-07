#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c='0';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                s[i]=c;
            }
            else{
                c=s[i];
            }
        }
        cout<<s<<endl;
    }
}