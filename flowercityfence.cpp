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
       
       if(n!=a[0]){
        cout<<"NO"<<endl;
       continue;
       }
       long long int d[n];
       d[0]=a[n-1];
       long long int p=1;
       for(int i=n-2;i>=0;i--){
        d[p]=a[i]-a[i+1];
        p++;
       
       }
       long long int z=a[0];
       long long int k=0;
       int c=0;
       for(int i=0;i<n;i++){
        long long int x=d[i];
        if(d[i]==0){
            z--;
            continue;
        }
        while(x--){
            if(a[k]!=z){
                c=1;
                break;
            }
            k++;
        }
        z--;
       }
       if(c==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
      



        
        }
}