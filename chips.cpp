#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        long long int sum1=0;
        long long int sum2=0;
        long long int min1=10E9;
        long long int min2=10E9;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(min1>a[i]){
                min1=a[i];
            }
            sum1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(min2>b[i]){
                min2=b[i];
            }
            sum2+=b[i];
        }
        long long int z=sum2+n*min1;
        long long int p=sum1+n*min2;
        
        cout<<min(z,p)<<endl;

        
    }
}