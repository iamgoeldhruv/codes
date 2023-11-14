#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long n,k,g;
        cin>>n>>k>>g;
        long long m=ceil(g/2);
        long long saved=0;
        long long r;
        long long left;
       
        if(m!=1){
        long long z=m-1;
        long long int q=(((k*g)/(z)));
        long long w=min((n-1)*z,q*z);
        long long f=w/z;
         left=k*g-w;
         saved+=f*z;
         r=(left)%g;}
        else{
           left=k*g;
            r=(left)%g;
        }
        if(r>=ceil(g/2)){
            saved+=left-(left+g-r);
        }
        else{
            saved+=left-(left-r);
        }
        cout<<saved<<endl;

    }
}