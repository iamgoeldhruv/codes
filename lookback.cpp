#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        long long int a[n];
        long long int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int y=a[0];
        for(int i=1;i<=n;i++){
            if(a[i]>=a[i-1]){
                continue;
            }
            else{
                while(a[i+1]<a[i]){
                    a[i+1]*=2;
                    c++;
                }
                
            }

        }
        cout<<c<<endl;

    }
}