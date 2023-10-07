#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        int a[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k){
                c++;
            }

        }
        if(c>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}