#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a,b;
        cin>>a>>b;
        int z=0;
        vector<pair<int ,int>>v;
        for(int i=0;i<k;i++){
            cin>>v[i].first;
            cin>>v[i].second;

        }
        int x,y;
        if((a-1)>=1 and (a-1)<=n){
             x=a-1;
            y=b;
        
        int c=0;
        for(int i=0;i<k;i++){
            if((fabs(v[i].first-x)+fabs(v[i].second-y))==1){
                c++;
                break;
            }
        }
        if(c==1){
            cout<<"NO"<<endl;
            z++;
        }}
        if((a+1)>=1 and (a+1)<=n){
             x=a+1;
            y=b;
        
        int c=0;
        for(int i=0;i<k;i++){
             if((fabs(v[i].first-x)+fabs(v[i].second-y))==1){
                c++;
                break;
            }
        }
        if(c==1){
            cout<<"NO"<<endl;
           z++;
        }}
        if((b+1)>=1 and (b+1)<=m){
             x=a;
            y=b+1;
        
        int c=0;
        for(int i=0;i<k;i++){
            if((fabs(v[i].first-x)+fabs(v[i].second-y))==1){
                c++;
                break;
            }
        }
        if(c==1){
            cout<<"NO"<<endl;
            z++;
        }}
        if((b-1)>=1 and (b-1)<=m){
             x=a;
            y=b-1;
        
        int c=0;
        for(int i=0;i<k;i++){
             if((fabs(v[i].first-x)+fabs(v[i].second-y))==1){
                c++;
                break;
            }
        }
        if(c==1){
            cout<<"NO"<<endl;
           z++;
        }}
        if(z==0){
            cout<<"YES"<<endl;

        }
        

    }
}