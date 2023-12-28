#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,long long int>m;
        map<long long int,long long int>m1;
        long long int c=0;
        for(int i=0;i<n;i++){
            if(m[s[i]]==0){
                m[s[i]]++;
                c++;
            }
            m1[i+1]=c;
        }
        long long int sum=0;
        for(auto it :m1){
            sum+=it.second;
        }
        cout<<sum<<endl;
    }
}