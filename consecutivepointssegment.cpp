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
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        long long int c=0;
        long long int z=0;
        for(int i=1;i<n;i++){
            long long int diff=a[i]-a[i-1];
            if(diff==1){
                
                z++;
                continue;
            }
            if(diff==2){
                if(i==1){
                    continue;
                }
                
                    if(z==i-1){
                        continue;
                    }
                    a[i]--;
                     continue;

                
                
            }
            if(diff==3){
                
                  if(i==1){
                    a[i]--;
                    continue;
                  }
                  else if(z==i-1){
                    a[i]--;
                    continue;
                  }
                  else{
                    c=1;
                    break;

                  }

            }
    
                
                
            
            

           
            
            

                
            c=1;
            break;
                
            }
           

        
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}