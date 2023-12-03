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
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        if(one<n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}