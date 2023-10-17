#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int c=n-1;
        for(int i=0;i<n-2;i++){
            if((s[i]==s[i+2])){
                c--;
            }
        }
        cout<<c<<endl;
    }
}