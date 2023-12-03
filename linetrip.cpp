#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int x,n;
        cin>>n>>x;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        for(int i=1;i<n;i++){
            v.push_back(a[i]-a[i-1]);



        }
        v.push_back(2*(-a[n-1]+x));
        v.push_back(a[0]-0);
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }
}