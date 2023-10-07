#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a1[n];
        long long int a2[n];
       
        for(int i=0;i<n;i++){
            cin>>a1[i];
            a2[i]=a1[i];
        }
        sort(a2,a2+n);
        int c=0;
        for(int i=0;i<n;i++){
            if(a1[i]%2==a2[i]%2){
                c++;
            }
        }
        if(c==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
   
}