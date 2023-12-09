#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int a1[n];
        long double sum=0;
        

        for(int i=0;i<n;i++){
            cin>>a[i];
            a1[i]=a[i];
            sum+=a[i];
        }
        sort(a1, a1+n, greater<int>());
        long double asum[n];
        asum[0]=sum;
        
        for(int i=1;i<n;i++){
            sum-=a1[i-1];
            asum[i]=sum;
        }
        long long int c=n;
        map<long long int,long long int>m;
         long long int p=0;
        for(int i=0;i<n;i++){

            
            long double z=asum[i];
           
            while(a1[p]>z){
                p++;
                c--;

            }
            m[a1[i]]=max(m[a1[i]],c);
        }
        int www=0;
        for(int i=0;i<n;i++){
           if((m[a[i]]-1)>=0){
            cout<<m[a[i]]-1<<" ";
           }
           else{
            cout<<0<<" ";
           }
        }
        cout<<endl;


        
        
    }
}