#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int x;
        cin>>x;
        vector<long long int>v;
        v.push_back(x);
        while(__builtin_popcount(x)>1){
            long long int p=__builtin_ctz(x);
            x=x-pow(2,p);
             v.push_back(x);
        }
        while(x!=1){
            x/=2;
             v.push_back(x);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    
    }
}