#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int a[n];
        long long int b[m];
        long long int a1=0;
        long long int a2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a1^=a[i];
            
        }
        int b1=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            b1|=b[i];

        }
        for(int i=0;i<n;i++){
            a[i]=a[i]|b1;
            a2^=a[i];
        }
        if(n%2==0){
            cout<<a2<<" "<<a1<<endl;
        }
        else{
            cout<<a1<<" "<<a2<<endl;
        }
        

        

    }
}