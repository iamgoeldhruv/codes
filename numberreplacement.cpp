#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        string s;
        cin>>s;
        unordered_map<int,int>m1;
        unordered_map<int,char>m2;
        int c=0;
        for(int i=0;i<n;i++){
            if(m1[a[i]]==0){
                m1[a[i]]++;
                m2[a[i]]=s[i];
            }
            else{
                if(s[i]==m2[a[i]]){
                    continue;
                }
                else{
                    c++;
                    break;
                }
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}