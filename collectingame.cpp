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
        for(int i=0;i<n;i++){
            cin>>a[i];
            a1[i]=a[i];

        }
        sort(a1,a1+n);
        long double sum=0;
        map<long double,long double>m1;
        for(int i=0;i<n-1;i++){
            sum+=a1[i];
            if(a1[i]==a1[i+1]){
                continue;
            }
            m1[i]=sum;
            
        }
        sum+=a1[n-1];
        m1[n-1]=sum;
        map<long long int,long long int>m;
        long long int p=0;
        for(long long int i=0;i<n-1;i++){
            if(a1[i]==a1[i+1]){
                continue;
            }
            p=max(i,p);
            long double z=m1[p];
            if(p<n-1){
                while(a1[p+1]<=z){
                    z+=a1[p+1];
                    p++;
                    if(p==n-1){
                        break;
                    }
                }
               
            }
            m[a1[i]]=p;


        
        

        }
        m[a1[n-1]]=n-1;
        for(int i=0;i<n;i++){
            cout<<m[a[i]]<<" ";
        }
        cout<<endl;
        
            
           


        
       
    }
}
