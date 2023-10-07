#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        unordered_map<long long int ,long long int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int z=0;
                int y=n-1;
        for(int i=1;i<=k;i++){
            if(m[i]>0){
                
                int c=0;
                char Z='a';
                char Y='a';
 
                while(true){
                    if(a[z]>=i){
                       
                        Z='z';
                    }
                    if(a[y]>=i){
                        
                        Y='y';
 
                    }
                    if(Z!='z' && Y!='y'){
                        z++;
                        y--;
                    }
                    else if(Z!='z' && Y=='y'){
                        z++;
                        
                    }
                    else if(Z=='z' && Y!='y'){
                        y--;
                        
                    }
                    else if(Z=='z' && Y=='y'){
                        
                        
                       break;
                        
                    }
 
                }
                cout<<(y-z+1)*2<<" ";
            }
            else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
        
 
    }
}