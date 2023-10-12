#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int a1[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a1[i]=a[i];
        }
        long long int b[n];
         for(int i=0;i<n;i++){
            cin>>b[i];
           
        }
        sort(b,b+n);
        sort(a,a+n);
        unordered_map<long long int,vector<long long int>>m;
        for(int i=0;i<n;i++){
            m[a[i]].push_back(b[i]);

        }
        unordered_map<long long int,long long int>m1;
        for(int i=0;i<n;i++){
            cout<<m[a1[i]][m1[a1[i]]]<<" ";
            m1[a1[i]]++;
        }
        cout<<endl;
       

    }
}