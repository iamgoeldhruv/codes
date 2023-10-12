#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main(){
    long long int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int c=0;
        int z=0;
        while(x.length()<=100){
          
           bool isFound = x.find(s) != string::npos;
             if(!isFound){
                
                x+=x;
                // cout<<x<<endl;
                z++;
             }
             else{
                c++;
                break;
                

             }
        }
        if(c==0){
            cout<<-1<<endl;
        }
        else{
            cout<<z<<endl;
        }
    }
}