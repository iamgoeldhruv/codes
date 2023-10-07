#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s; 
        cin>>s;
        long long int zeroxor=0;
        long long int onexor=0;
        long long int xoor=0;
        long long int x[n];
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zeroxor^=a[i];
                 
            }
            else{
                onexor^=a[i];
               
            }
            xoor^=a[i];
            x[i]=xoor;
 
 
        } 
 
        long long int q;
        cin>>q;
        while(q--){
            int tp;
            cin>>tp;
            if(tp==1){
                int l,r;
                cin>>l>>r;
                int zero=x[r-1],one=0;
                l=l-1;
                if(l>0){
                    zero=zero^x[l-1];
 
 
 
                }
                
                
               
                zeroxor=zeroxor^zero;
                onexor=onexor^zero;
 
            }
            
            if(tp==2){
                char g;
                
                cin>>g;
                g=='1'?cout<<onexor<<" ":cout<<zeroxor<<" ";
                
                
            }
            
        }
        cout<<endl;
    }
}