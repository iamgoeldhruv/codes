#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<pair<long long int,long long int>>v;
        for(int i=0;i<n;i++){
            pair<long long int,long long int>p;
            cin>>p.first;
            p.second=i;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        long long int b[n];
        long long int z=n;
        for(int i=0;i<n;i++){
            b[v[i].second]=z;
            z--;



        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;

        

    }
}