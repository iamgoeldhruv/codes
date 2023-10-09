#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=18 and n%3==0){
            cout<<"YES"<<endl;
            cout<<3<<" "<<6<<" "<<n-9<<endl
        }
    }
}