#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k){
            cout<<-1<<endl;
            continue;
        }
        if(x<k-1){
            cout<<-1<<endl;
            continue;
        }
        int a=(k)*(k-1)/2;
        if(x==k){
            a+=(n-k)*(x-1);
        }
        else{
            a+=(n-k)*(x);
        }
        cout<<a<<endl;
        
    }
}