#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int j=0;
        int a=0;
        while(j<s.size()-1)
        {
            if((s[j]-s[j+1])==1 or (s[j]-s[j+1])==-1)
            {
                s.erase(s.begin()+j,s.begin()+(j+2));
                a++;
                j=0;
                continue;

            }
            if(s.size()==0 or s.size()==1)
            {
                break;
            }
            if(j==(s.size()-2) and fabs((s[j]-s[j+1]))!=1)
            {
                break;
            }
            j++;
            
        }
        if(a%2==0)
        {
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }

        

        

    }
}