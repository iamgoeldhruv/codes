#include<bits/stdc++.h>
using namespace std;
int main(){
   
    long long int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        vector<long long int>v;
        long long int i=0;
        long long int n=s.size();
        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }
         long long int c=0;
        while(i<n-1){
           
            if(s[i+1]==s[i]){
                c++;
                i++;
            }
            else{
                v.push_back(c+1);
                c=0;
                i++;
                
            }
            
        }
        
            v.push_back(c+1);
            long long int z=0;
        
    
        for(int i=0;i<v.size();i++){
          if(v[i]!=1){
            continue;
          }
          else{
            z=1;
            break;
          }

        }
        if(z==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}