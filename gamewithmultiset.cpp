#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t1;
    cin>>t1;
    unordered_map<long long int,long long int>m;
    while(t1--){
        long long int t,v;
        cin>>t>>v;
        if(t==1){
            m[v]++;
        }
        if(t==2){
            int c=0;
            if(v==0){
              cout<<"YES"<<endl;
               continue;
            }   
                    for(int i=29;i>=0;i--){
                    long long int k=m[i];
                    long long int o=v/(1<<i);
                    v-=min(k,o)*(1<<i);
                    if(v==0){
                        c++;
                    }
                    if(c==1){
                        break;
                    }
                }
                if(c>0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }}
}