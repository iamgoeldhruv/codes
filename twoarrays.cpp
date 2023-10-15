#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        unordered_map<long long int,long long int>m;
        unordered_map<long long int,long long int>m1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m1[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            m[b[i]]++;
        }
        long long int c=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(m[a[i]]>0){
                c++;
                m[a[i]]--;
            }
            else if (m[a[i]+1]>0){
                c++;
                m[a[i]+1]--;
            }
           

            
        }
        if(c==n){
            cout<<"YES"<<endl;
            
        }
        else{
            
            cout<<"NO"<<endl;
        }
    }
}