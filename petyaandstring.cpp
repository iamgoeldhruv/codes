#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   
    if(s1<s2)
    {
        cout<<-1;
    }
    if(s1>s2)
    {
        cout<<1;
    }
    if(s1==s2)
    {
        cout<<0;
    }
    return 0;
    
    
}
