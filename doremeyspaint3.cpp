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
        int c=0;
        unordered_map<long long int,long long int>m;
        for(int i=0;i<n;i++){
        if(m[a[i]]>0){
            m[a[i]]++;
            continue;
        }
        else{
                m[a[i]]++;
                c++;
            }
            
        }
        
        if(c>2){
            cout<<"NO"<<endl;
        }
        else if(c==1){
            cout<<"YES"<<endl;

        }
        else if(c==2){
            int z=0;
            if(n%2==0){
                
                if(m[a[0]]==n/2){
                    z++;
                }
            }
            if(n%2==1){
                if(m[a[0]]==n/2 or m[a[0]]==n/2+1){
                    z++;
                }

            }
            if(z>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
       
      
    }
}