#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
    long long int n,p;
    cin>>n>>p;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    unordered_map<long long int,long long int>m;
    for(int i=0;i<n;i++){
        m[b[i]]+=a[i];
    }
    sort(b,b+n);
    
    long long int cost=0;
    long long int mi=0;
    vector<long long int>v;
    unordered_map<long long int,long long int>m1;
    for(int i=0;i<n;i++){
        if(m1[b[i]]==0){
            v.push_back(b[i]);
            m1[b[i]]++;
        }
    }

    for(int i=0;i<v.size();i++){
        if(i==0){
             cost+=p;
             mi++;

        }
       
        if(mi==n){
            break;
        }
        
        long long int rem= n-mi;

        if(p<v[i]){
            cost+=p*rem;
            mi+=rem;
            break;
        }
        else{
            long long int k=min(m[v[i]],rem);
            cost+=k*v[i];
            mi+=k;

        }
       
                        
                    
      
    }
     cout<<cost<<endl;

    
    }


    
  
}