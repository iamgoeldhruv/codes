#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int maxx=0;
        for(int i=0;i<n;i++){
            if((i+1)<a[i]){
                maxx=max((i+1-a[i]),maxx);
            }

        }
        cout<<maxx<<endl;
    }
}