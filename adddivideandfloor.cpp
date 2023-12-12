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
        sort(a,a+n);
        long long int p=a[0];
        long long int c=0;
        long long int z=a[n-1];
        while(z!=p){
            z=floor((z+p)/2);
            c++;
        }
        cout<<c<<endl;
        if(c<=n){
            for(int i=0;i<c;i++){
                cout<<p<<" ";
            }
            cout<<endl;
        }
    }
}