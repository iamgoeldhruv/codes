#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int ec=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                ec++;
            }
        }
        sort(a,a+n);
        if(a[0]%2!=0){
            cout<<"YES"<<endl;
            
        }
        else{
            if(ec==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }

    }
}