#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int b[n*(n-1)/2];
        map<long long int,long long int>m;
        for(int i=0;i<n*(n-1)/2;i++){
            cin>>b[i];
            m[b[i]]++;
        }
        vector<long long int>v;
        vector<long long int>v1;
        for(auto it:m){
            v.push_back(it.first);
        }
        sort(v.begin(),v.end());
        long long int j=n-1;
        for(int i=0;i<v.size();i++){
            long long int a=v[i];
            while(m[a]!=0){
                v1.push_back(a);
                m[a]-=j;
                j--;
            }

        }
        for(int i=0;i<n-1;i++){
            cout<<v1[i]<<" ";
        }
        cout<<v1[n-2];
        cout<<endl;
    }
}