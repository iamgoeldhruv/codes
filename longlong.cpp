#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        long long c=0;
        long long l=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                if(l==0){
                     l=1;
                    c++;

                }
               
            }
            if(a[i]>0){
                l=0;
            }
            sum+=fabs(a[i]);
            
        }
        cout<<sum<<" "<<c<<endl;
    }
}