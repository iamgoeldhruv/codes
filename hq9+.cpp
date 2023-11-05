#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
        {
            cout<<"YES";
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"NO";
    }
}