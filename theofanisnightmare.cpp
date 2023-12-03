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
        long long int sum=0;
        long long int sum1=0;
        long long int sum2=0;

        
        long long int k;
        if(a[n-1]<0){
            long long int i=n-1;
            while(a[i]<=0 and i>=0){
                sum+=a[i];
                k=i;
                i--;
                

            }
            for(int i=0;i<k;i++){
                sum1+=(i+1)*a[i];

            }
            sum1+=(k)*sum;
            cout<<sum1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                sum2+=(i+1)*a[i];
            }
            cout<<sum2<<endl;
        }
        
    }
}