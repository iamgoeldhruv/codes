#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        unordered_map<long long int,long long int>m;
        long long int count=0;
        for(int i=0;i<n-1;i++){
            long long int x,y;
            cin>>x>>y;
            m[x]++;
            m[y]++;
        }
        if(n==2){
            cout<<1<<endl;
            continue;
        }
        long long int c=0;
        for(int i=1;i<=n;i++){
            if(m[i]==1){
                count++;
            }
        }
        cout<<(count+1)/2<<endl;
    }
}