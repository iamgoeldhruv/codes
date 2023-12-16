#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long  n,c;
        cin>>n>>c;
        long long  a[n];
        long long  sum1=0;
        long long  sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i]*a[i];
            sum2+=a[i];
        }
        long double p=0.5;
        long double q=sum2/(2*n);
        long double r=(sum1-c)/(8*n);
        long double  w1=((-q+sqrt((q*q-4*p*r))));
        long long int w11=w1;
        cout<<w11<<endl;

        
        
    }
}