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
        long long int m;
        cin>>m;
        long long int b[m];
        long long int sum=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            sum+=b[i];
        }
        long long int c=sum%n;
        cout<<a[c]<<endl;


    }
}