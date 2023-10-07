#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long int z=(x+sum)/n;
        long long int q=0;
        
        for(int i=0;i<n;i++){
            if(z-a[i]>0){
                q+=z-a[i];
                
                
            }
        }
        
        
        
        
        if(x<q){
            long long int start=1;
            long long int end=z;
            long long int mid;
            
 
            
        while(start<=end){
        mid=start+(end-start)/2;
            // long long int mid=floor(mid1);
            q=0;
           
            for(int i=0;i<n;i++){
            if(mid-a[i]>0){
                q+=mid-a[i];
            }
            }
            
            if(q>x){
                end=mid-1;
            }
            else{
                z=mid;
                start=mid+1;
            }
           
 
 
            
        
           
        
 
        
 
        }
       
 
        }

 
        
        cout<<z<<endl;
 
    }
}