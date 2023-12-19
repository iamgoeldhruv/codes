#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        int p=65;
        sort(s.begin(),s.end());
        for(int i=1;i<=26;i++){
            m[char(p)]=i;
            p++;

        }
        int k=0;
        int c=0;
        map<char,int>m1;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;

        }
        for(auto it :m1){
            if(it.second>=m[it.first]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}