#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        if(n==1 and m==1){
            cout<<0<<endl;
            continue;
        }
        long long int z=0;
        if(m!=1){
            if(m==2 or m==3){
                z=1*n;
            }
            else{
                if(m%3==0){
                    z=m/3*n;
                }
                if(m%3==1){
                    z=((m-1)/3+1)*n;
                }
                if(m%3==2){
                    z=(m+1)/3*n;
                }

            }
        }
        long long int q=0;
        if(n!=1){
            if(n==2 or n==3){
                q=1*m;
            }
            else{
                if(n%3==0){
                    q=n/3*m;
                }
                if(n%3==1){
                    q=((n-1)/3+1)*m;
                }
                if(n%3==2){
                    q=(n+1)/3*m;
                }

            }
        }
        if(min(z,q)!=0){
            cout<<min(z,q)<<endl;
        }
        else{
            cout<<max(z,q)<<endl;
        }

    }
}