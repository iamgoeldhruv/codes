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
            cout<<a[0]-1<<endl;
            continue;
        }
        long long int c=a[0]-1;
        long long int k=0;
        for(int i=0;i<n-1;i++){
            long long int z=min(a[i]-a[i+1],k);
            c+=-z;

        }
        cout<<c<<endl;
    }
}