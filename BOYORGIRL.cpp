#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int j=0;
    int c=0;
    while(j<s.size())
    {
        if(s[j]==s[j+1])
        {
            
            int i=j+1;
            while(true)
            {
                if(s[i]==s[j])
                {
                    c++;
                }
                if(s[i]!=s[j])
                {
                    j=i;
                    break;
                }
                i++;
            }
        }
        else
        {
            j++;
        }
    }
    int a=s.size();
    if((a-c)%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    
        
    
   
    return 0;
}