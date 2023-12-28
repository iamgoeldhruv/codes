#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int z=log2(n);
        long long int k1=min(z,k-1);
       long long int z1=(1<<(k1+1))-1;
       cout<<min(n,z1)+1<<endl;
    }
}