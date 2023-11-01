#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n,q;
        cin>>n>>q;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int x[q];
        for(int i=0;i<q;i++){
            cin>>x[i];
        }
        for(int i=0;i<q;i++){
            long long int c=pow(2,x[i]);
            for(int j=0;j<n;j++){
                if(a[j]%c==0){
                    cout<<x[i]<<" "<<a[j]<<endl;
                    a[j]+=pow(2,x[i]-1);
                    
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}