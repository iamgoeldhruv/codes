#include<bits/stdc++.h>

using namespace std;

 

long long int  lcm(long long int a, long long int b)
{
    return (a / __gcd(a, b)) * b;
}


int main(){
    long long int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long int r,b1;
    long long int both=0;
    r=n/a;
    b1=n/b;
   both=n/lcm(a,b);
   
    
    
    if(p>=q){
        cout<<((r)*p +(b1-both)*q );
    }else{
        cout<<((r-both)*p +(b1)*q );
    }
    

    

}