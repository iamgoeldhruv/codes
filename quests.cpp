#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int b[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long int maxx=0;
        long long int sum=0;
        long long int maxb=0;
        long long int p= min(n,k);
        
        for(int i=0;i<p;i++){
            sum+=a[i];
            k--;
            
            if(b[i]>maxb){
                
                maxb=b[i];
            }
            long long int g=sum+(k*(maxb));
            maxx=max(maxx,g);

            
        }
        
        cout<<maxx<<endl;


    }
}