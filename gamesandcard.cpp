#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0;
        int j=0;
        if(a[n-1]>b[m-1]){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        if(a[n-1]<b[m-1]){
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        if(a[n-1]==b[m-1]){
            
           
                 cout<<"Alice"<<endl;
                  cout<<"Bob"<<endl;

            
        }
    }
}