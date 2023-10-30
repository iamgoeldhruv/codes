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
        long long int c=0;
        long long int y=a[0];
        long long int b=0;
        long long int curr=0;
        long long int ans=0;
        for(int i=1;i<n;i++){
            long long int z=a[i];
            long long int y=a[i-1];
            while(curr>0 and y<=z){
                y*=2;
                curr--;

            }
            while(z<y){
                z*=2;
                curr++;


            }
            ans+=curr;
          
            
            
        }
        cout<<ans<<endl;

    }
}