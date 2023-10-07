#include<bits/stdc++.h>
using namespace std;
int main(){
    
        long long int n;
        cin>>n;
        vector<pair<long long int,long long int>>v;
        for(long long int i=0;i<n;i++){
            pair<long long int,long long int>p;
            cin>>p.first;
            p.second=i;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        
        long long int m;
        cin>>m;
        long long int u=0;
        long long int p=0;
        while(m--){
            
            long long int b;
            cin>>b;

            int x=0;
            int y=n-1;
            while(x<=y){
                long long int mid=x+(y-x)/2;
                if(v[mid].first==b){
                    u+=v[mid].second+1;
                    p+=n-v[mid].second;
                    break;
                }
                 if(v[mid].first<b){
                    x=mid+1;
                 }
                 if(v[mid].first>b){
                    y=mid-1;
                 }


                
            }


        }
        cout<<u<<" "<<p<<endl;
    }
