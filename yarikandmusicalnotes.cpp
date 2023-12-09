#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
     long double diff[n];
        for(int i=0;i<n;i++){
            diff[i]=a[i]-log2(a[i]);

        }
        map<long double,long long int>m;
        for(int i=0;i<n;i++){
            m[diff[i]]++;

        }
        long long int c=0;
        for(auto it :m){
            if(it.second>1){
                long long int z=it.second-1;
                c+=z*(z+1)/2;

            }
        }
        cout<<c<<endl;
    }
}