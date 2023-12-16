#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        long long int b[n];
        long long int c[n];
        long long int d[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[i]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            d[i]=b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        map<long long int,vector<long long int>>m;
        
        long long int p=n-1;
        long long int z=0;
        for(long long int i=x-1;i>=0;i--){
            if(a[p]<=b[i]){
                z++;
                break;
            }
            else{
                 m[a[p]].push_back(b[i]);
                 p--;

            }
            
        }
        long long int y=0;
        long long int j=n-1;
        for(int i=(n-x-1);i>=0;i--){
            if(a[i]>b[j]){
                y++;
                break;
            }
            else{
                m[a[i]].push_back(b[j]);
                j--;

            }
        }
        if(z>0 or y>0){
            cout<<"NO"<<endl;
            continue;
        }
         cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<m[c[i]][m[c[i]].size()-1]<<" ";
            m[c[i]].pop_back();


        }
        cout<<endl;
    }
}