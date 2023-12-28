#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        int zcount=0;
        int ncount=0;
        int pcount=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                zcount++;
            }
            if(a[i]<0){
                ncount++;
            }
            else{
                pcount++;
            }
        }
        if(zcount>0){
            cout<<0<<endl;
            continue;
        }
        if(ncount%2==0){
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
            continue;

        }
        cout<<0<<endl;
    }
}