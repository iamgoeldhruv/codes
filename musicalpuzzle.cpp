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
        long long int c=0;
        unordered_map<string,int>m;
        for(int i=0;i<n-1;i++){
         
           string a = s.substr(i, 2);
            
            if(m[a]==0){
                m[a]++;
                c++;
            }

        }
        cout<<c<<endl;
    }
}