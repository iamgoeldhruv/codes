#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long int a[n];
        long long int b[m];
        long long int suma=0;
        long long int sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sumb+=b[i];
        }
        if(suma>sumb){
            cout<<"Tsondu"<<endl;
        }
        if(suma<sumb){
            cout<<"Tenzing"<<endl;
        }
        if(suma==sumb){
            cout<<"Draw"<<endl;
        }


    }
}