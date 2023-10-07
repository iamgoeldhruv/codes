#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    if(int('a')<=int(s[0]) and int(s[0])<=int('z'))
    {
        s[0]-=32;
    }
    cout<<s;
    return 0;



}
