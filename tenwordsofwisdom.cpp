#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        vector<pair<long long int,long long int>>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            long long int x,y;
            cin>>x>>y;
            v.push_back({x,y});}
        long long int max=0;
        int z=0;
        for(int i=0;i<n;i++){
            if(v[i].first<=10){
                if(v[i].second>max){
                    max=v[i].second;
                    z=i+1;
                }}}
        cout<<z<<endl;
    }}