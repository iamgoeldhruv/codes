#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        
        long long int n;
        cin>>n;
        long long int sum=1;
        while(n>0){
            int z=n%10;
            sum*=(z+1)*(z+2)/2;
            n/=10;
        }

    
        
        
        
        cout<<sum<<endl;
        
    }
}