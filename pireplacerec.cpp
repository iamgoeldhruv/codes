#include<iostream>
#include<string>
using namespace std;
void str(string s)
{
    if(s.size()==0)
    {
        return;
    }
    if(s[0]=='p' and s[1]=='i')
    {
        cout<<"3.14";
        str(s.substr(2));
    }
    else{
        cout<<s[0];
        str(s.substr(1));
    }
   

}
int main()
{
    string s;
    cin>>s;
    str(s);
    return 0;
}