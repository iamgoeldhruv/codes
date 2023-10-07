#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int sum1=k*(k+1)/2;
        
        long long int z=n-k;
        long long int sum2=(n*(n+1)/2)-(z*(z+1)/2);
        
        if(sum1<=x and sum2>=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}