#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int year;
    cin>>year;
    year=year+1;
    string s;
    while(true)
    {
        int a=0;
        s=to_string(year);
        
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                a+=1;
            }
        }
        if(a==0)
        {
            cout<<year;
            break;

        }
        else{
            year++;
        }
            
            

        

    }
    return 0;


}