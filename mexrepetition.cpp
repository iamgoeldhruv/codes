#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    long long int t;
    cin>>t;
   
    while(t--){
        unordered_map<int,int>m;
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]=1;

        }
        if(k>n){
            long long int z=k/(n+1);
            k=k-z*(n+1);
            
        }
        long long int missing;
        for(int i=0;i<=n;i++){
            if(m[i]!=1){
                missing=i;
                break;

            }
        }
        
        if(k==0){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        else{
            int i=0;
            int a1[k-1];
            while(i<k-1){
                
                a1[i]=a[n-i-1];
                i++;
            }
            for(int i=k-2;i>=0;i--){
                cout<<a1[i]<<" ";
            }
            cout<<missing<<" ";
            for(int i=0;i<n-k;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        





    }
}