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
        
       long long int sum[n];
       map<long long int,long long int>m;
       for(int i=0;i<n;i++){
        if(i==0){
            sum[i]=a[i];
            
        }
        else{
            sum[i]=a[i]+sum[i-1];
            
        }
        m[i+1]=sum[i];
       }
       for(int i=0;i<n-1;i++){
        if((i+1)%n==0){
            for(int j=0;j<n;j++){
                long long int diff=m[]
            }
        }
       }


    }
}