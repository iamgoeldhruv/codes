#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,t;
    cin>>n>>t;
    long long int a[n];
    for(int i=1;i<=n-1;i++){
        cin>>a[i];
    }
    int i=1;
    while(i<t){
        i=i+a[i];


    }
    if(i>t){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}