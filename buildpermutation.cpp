#include<bits/stdc++.h>
using namespace std;
int main(){
   
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a=2*n-2;
        vector<long long int>v;
        for(int i=1;i<=a;i++){
            long long int b=sqrt(a);
            if(b*b==a){
                v.push_back(a);
            }
        }
        long long int f=n-1;
        for(int i=v.size()-1;i>=0;i--){
            long long int d=sqrt(v[i]);
           long long int i=

        }
      
    }
}
