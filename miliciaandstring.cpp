#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<int,char>ma;
        map<int,char>mb;
        int ca=0;
        int cb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                ca++;
                ma[ca]=i;
            }
            
            if(s[i]=='B'){
                cb++;
                mb[cb]=i;
            }
        }
        if(cb==k){
            cout<<0<<endl;
            continue;
        }
        if(cb>k){
            int rem=cb-k;
            int z=mb[rem];
            cout<<1<<endl;
            cout<<z+1<<" "<<'A'<<endl;
        }
        else if(cb<k){
            int rem=-cb+k;
            int z=ma[rem];
            cout<<1<<endl;
            cout<<z+1<<" "<<'B'<<endl;

        }
}}