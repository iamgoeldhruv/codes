#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m;
        vector<pair<int,int>>v;
        int l=0;
        int o=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});


        }
        
        int c=0;

        for(int i=0;i<n;i++){
            if(v[i].first<0){
                c++;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i].first>0){
                c++;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i].second>0){
                c++;
                break;
            }
        }
         for(int i=0;i<n;i++){
            if(v[i].second<0){
                c++;
                break;
            }
        }
        if(c>3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }





    }
}