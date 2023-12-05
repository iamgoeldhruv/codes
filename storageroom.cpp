#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        
        long long int b[n];
        for(int i=0;i<n;i++){
            long long int sum=1073741823;
            for(int j=0;j<n;j++){
                if(i!=j){
                    sum=sum&a[i][j];
                }
                
            }
            b[i]=sum;
        }   
        long long int a1[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    a1[i][j]=b[i]|b[j];
                }
                else{
                    a1[i][j]=0;
                }
            }
        }  
        long long int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==a1[i][j]){
                    c++;
                }
            }
        } 
        if(c==n*n){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
            
          
        }
      
        
        

    }

}
