#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int z=n-m;
       
        long long int a=0;
        long long int k=max(a,z);
        if(n==m){
            cout<<m<<endl;
        }
        if(m>n){
            cout<<m<<endl;
        }
      
        for(int i=0;i<=k;i++){
           for(int j=0;j<m;j++){
            cout<<j<<" ";
           }
           cout<<endl;
            
        }
        long long int k1=1;
       
        for(int i=k+2;i<n;i++){
            long long int y=k1;
            long long int x=0;
            while(true){
                 
                cout<<y<<" ";
                x++;
                y++;
                if(x==m){
                    k1++;
                    break;

                }
                if(y==m){
                    y=0;
                }
                
            }
            cout<<endl;

        }

    }
}