#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    
    while(t--){
        long long int c=0;
        long long int x,y;
        cin>>x>>y;
        long long int a=x-1;
        long long int b=y+1;
        vector<long long int>v;
        for(int i=x;i>=y;i--){
            v.push_back(i);
        }
        for(int i=y+1;i<x;i++){
            v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        

       
       


    }
}