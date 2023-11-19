#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long double n;
        cin>>n;
        long long sum=0;
        while(n>1.5){
            sum+=n;
            n=floor(n/2);
        }
        cout<<sum+1<<endl;
    }
}