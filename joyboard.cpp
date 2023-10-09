#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,k;
        cin>>n>>m>>k;
        if(m==0 and k!=1){
            cout<<0<<endl;
            continue;


        }
        if(m==0 and k==1){
            cout<<1<<endl;
            continue;
        }
        if(k>3){
            cout<<0<<endl;
            continue;
        }
        if(k==3){
            if(m<=n or n==1 ){
                cout<<0<<endl;
                continue;
            }
            else{
                long long int y=m-n;
                cout<<((m-n)-(y/n))<<endl;
                continue;

            }
        }
        if(k==2){
            if(m<=n and m!=0){
                cout<<m<<endl;
                continue;
            }
            else{
                long long int z=m-n;
                cout<<(n)+(z/n)<<endl;
                continue;

            }

        }
        if(k==1){
            cout<<1<<endl;
            continue;
        }
























    }
}