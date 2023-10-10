#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       if(n<7 or n==9){
        cout<<"NO"<<endl;
        continue;
       }
       cout<<"YES"<<endl;
       if(n%3==0){
        cout<<1<<" "<<4<<" "<<n-5<<endl;
       }
       else{
        cout<<1<<" "<<2<<" "<<n-3<<endl;
       }
    }
}