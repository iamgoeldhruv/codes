#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    
  
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        int a=0;
        
        int b=s[i];
        for(int j=i;j<s.size();j++)
        {
            if(s[j]==b)
            {
                a++;
            }
            else{
                i=j-1;
                break;
            }
            
        }
        if(a>=7)
        {
            cout<<"YES"<<endl;
            c++;
            break;
        }

        
        
    }
    if(c==0)
    {
        cout<<"NO"<<endl;

    }
   
   
}