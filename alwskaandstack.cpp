#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        a[0]=1;
        a[1]=3;
        for(long long int i=2;i<n;i++){
            long long int sum=a[i-2]+a[i-1];
            a[i]=a[i-1]+1;
            while(true){
            if((a[i]*3)%sum==0){
                a[i]++;

            }
            else{
                break;
            }
            }


            }

            

            
        
        for(long long int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    

    }
