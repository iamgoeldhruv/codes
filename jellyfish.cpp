#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int x[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>x[i];

            sum+=min(x[i],a-1);
        }
        cout<<sum+b<<endl;

    }
}