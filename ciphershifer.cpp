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
        string a="";
        char x=s[0];
        a+=x;
        for(int i=1;i<n;i++){
            if(s[i]==x){
                if(i<n-1){
                    x=s[i+1];a+=x;
                 
                 i++;

                }
                
            }
        }
        cout<<a<<endl;
    }
}