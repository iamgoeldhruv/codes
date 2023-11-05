#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long int>v;
        unordered_map<long long int,long long int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            if(m[a[i]]==1){
                v.push_back(a[i]);
            }
        }
        long long int c=0;
         unordered_map<long long int,long long int>m1;
        for(int i=0;i<v.size();i++){
            m1[v[i]]++;
        }
        
        for(int i=0;i<v.size();i++){
            while(true){
                if(v[i]%2!=0){
                    break;
                }
                else{
                    c++;
                    v[i]/=2;
                    if(m1[v[i]]==1){
                        break;
                    }
                }

            }
            


        }
        cout<<c<<endl;

    }
}