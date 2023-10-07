#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void str(string s)
{
    sort(s.begin(),s.end());
    if(s.length()==1)
    {
        cout<<s[0];
        return;
    }
    if(s[0]==s[1])
    {
        cout<<s[1];
        str(s.substr(2));
        s.erase(1,1);
        
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