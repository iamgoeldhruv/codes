#include<bits/stdc++.h>
using namespace std;
long long int min(long long int a,long long int b){
    if(a<b){
        return a;

    }
    else{
        return b;
    }
}
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
       long long int c=0;
       for(int i=1;i<=n;i=i*10+1){
            c+=min(9,n/i);
       }
       cout<<c<<endl;

    }
}