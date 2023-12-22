#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        vector<pair<long long int,long long int>>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            v.push_back({a[i]+b[i],i});
        }
        sort(v.begin(),v.end());
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(c==0){
             a[v[i].second]--;
             b[v[i].second]=0;
             c++;
            continue;}
            if(c==1){
                b[v[i].second]--;
             a[v[i].second]=0;
                c--;
            }
        }
        long long int sum1=0;
        long long int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=a[i];
            sum2+=b[i];
        }
        
        
        cout<<sum1-sum2<<endl;
    }
}