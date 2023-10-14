#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
             v.push_back(s);
        }
        long long int c=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-1-j][i]){
                   int z1=int(v[i][j]);
                   int z2=int(v[n-1-j][i]);
                   int diff=fabs(z2-z1);
                    c+=diff;
                    if(z2>z1){
                        v[i][j]=v[n-1-j][i];
                    }
                    if(z2<z1){
                        v[n-1-j][i]=v[i][j];
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-1-j][i]){
                   int z1=int(v[i][j]);
                   int z2=int(v[n-1-j][i]);
                   int diff=fabs(z2-z1);
                    c+=diff;
                    if(z2>z1){
                        v[i][j]=v[n-1-j][i];
                    }
                    if(z2<z1){
                        v[n-1-j][i]=v[i][j];
                    }
                }
            }
        }
        cout<<c<<endl;
    }
}