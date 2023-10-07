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
        long long int z=0;
        long long int sum=0;
        long long int i=0;
        long long int c=0;
        while(z<n){
            if(i==0){
                if(a[z]>0){
                    sum+=a[z];
                    z++;
                   
                        c++;
                    
                    continue;

                }
                else{
                    i++;
                    z++;
                    continue;
                }
            }
            if(i==1){
                if(a[z]>0){
                    if(c%2==0){
                    if((a[z-1]+a[z])>0){
                        sum+=a[z]+a[z-1];
                        z++;
                        i--;
                        
                        
                    }
                    else{
                        z++;
                        i++;
                    }
                   
                    }
                    if(c%2==1){
                        sum+=a[z];
                        z++;
                        i--;
                       
                    }
                     continue;
                }
                
                    else{
                        i++;
                        z++;
                        continue;
                    }

                
                
            }
            if(i>=2){
                if(a[z]>0){
                    sum+=a[z];
                    z++;
                    i--;
                    continue;
                }
                else{
                    i++;
                    z++;
                }
            }
           
        }
        cout<<sum<<endl;

    }
}