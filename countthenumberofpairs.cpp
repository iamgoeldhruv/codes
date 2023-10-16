#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,long long int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;

        }
        long long int burls=0;
        long long int a;
        long long int b;
        long long int rem;
         long long int common;
        for(int i=97;i<=122;i++){
            a=m[char(i)];
            b=m[char(i)-32];
            rem=fabs(a-b);
            common=max(a,b)-rem;
            burls+=common;
            if(k>=rem/2){
                burls+=rem/2;
                k-=rem/2;

            }
            else{
                burls+=k;
                k=0;

            }
            

            

        }
        cout<<burls<<endl;
    }
}