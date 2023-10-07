#include<iostream>
#include<string>
using namespace std;
int a;
string reverse(string s1,string s2)
{
    a=s1.length();

    if(a==1)
    {
        s2+=s1.substr(0);
        return s2;

    }
    s2+=s1.substr(a-1);
    s1.erase(a-1,1);
    reverse(s1,s2);
    
}




    
    
int main()
{
    string s1;
    cin>>s1;
    string s2=" ";
    cout<<reverse(s1,s2);
    return 0;

}







